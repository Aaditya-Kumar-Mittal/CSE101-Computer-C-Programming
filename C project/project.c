#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Structure of Bus Creation
struct Bus
{
    int bus_number;
    char route[50];
    int fare;
    int seats_available;
};


// Display Bus Module Creation
void displayBuses(char *route)
{
    FILE *fp, *bus_info;

    struct Bus bus;

    if ((fp = fopen("buses.txt", "rb")) == NULL)
    {
        printf("Error: File could not be opened.\n");

        return;
    }

    if ((bus_info = fopen("output.txt", "w")) == NULL)
    {
        printf("Error: File could not be opened.\n");
       
        return;
    }

    printf("%-15s %-15s %-15s %-15s\n", "Bus Number", "Route", "Fare", "Seats Available");

    printf("--------------------------------------------------------------\n");

    fprintf(bus_info, "%-15s %-15s %-15s %-15s\n", "Bus Number", "Route", "Fare", "Seats Available");

    fprintf(bus_info, "--------------------------------------------------------------\n");

    while (fread(&bus, sizeof(bus), 1, fp) == 1)
    {
        if (strcmp(bus.route, route) == 0)
        {
            printf("%-15d %-15s %-15d %-15d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);

            fprintf(bus_info, "%-15d %-15s %-15d %-15d\n", bus.bus_number, bus.route, bus.fare, bus.seats_available);
        }
    }

    fclose(fp);

    fclose(bus_info);
}



// Adding Bus to the System
void AddBus()
{
    FILE *fp;
    struct Bus buses[10];
    int num_buses, i;

    fp = fopen("buses.txt", "ab");

    if (fp == NULL)
    {
        printf("Error: File could not be opened.\n");

        return;
    }

    printf("Enter the number of buses to add: ");

    scanf("%d", &num_buses);

    for (i = 0; i < num_buses; i++)
    {
        printf("\nBus %d:\n", i+1);
        printf("Enter Bus Number: ");
        scanf("%d", &buses[i].bus_number);

        printf("Enter Route (Source-Destination): ");
        scanf("%s", buses[i].route);

        printf("Enter Fare: ");
        scanf("%d", &buses[i].fare);

        printf("Enter Seats Available: ");
        scanf("%d", &buses[i].seats_available);

        fwrite(&buses[i], sizeof(struct Bus), 1, fp);
    }

    fclose(fp);

    printf("\n%d buses added successfully.\n", num_buses);
}

// Module:- Booking a seat
void bookSeat()
{
    FILE *fp;
    struct Bus bus;
    int bus_number, seats;

    fp = fopen("buses.txt", "r+");

    if (fp == NULL)
    {
        printf("Error: File could not be opened.\n");

        return;
    }

    printf("Enter Bus Number: ");
    scanf("%d", &bus_number);

    rewind(fp);

    while (fread(&bus, sizeof(bus), 1, fp))
    {
        if (bus.bus_number == bus_number)
        {
            printf("Enter Seats to Book: ");
            scanf("%d", &seats);

            if (bus.seats_available >= seats)
            {
                bus.seats_available -= seats;
                fseek(fp, -sizeof(bus), SEEK_CUR);
                fwrite(&bus, sizeof(bus), 1, fp);
                printf("Seats Booked Successfully.\n");
                printf("The total price is: %d\n", seats * bus.fare);
                fclose(fp);
                return;
            }
            else
            {
                printf("Seats Not Available. Try Again Later.\n");
                fclose(fp);
                return;
            }
        }
    }

    printf("Bus Not Found.\n");
    fclose(fp);
}

void cancelSeat()
{
    FILE *fp;
    struct Bus bus;
    int bus_number, seats;

    fp = fopen("buses.txt", "r+");

    if (fp == NULL)
    {
        printf("Error: File could not be opened.\n");
        return;
    }

    printf("Enter Bus Number: ");
    scanf("%d", &bus_number);

    while (fread(&bus, sizeof(bus), 1, fp))
    {
        if (bus.bus_number == bus_number)
        {
            printf("Enter Seats to Cancel: ");
            scanf("%d", &seats);

            bus.seats_available += seats;
            fseek(fp, -sizeof(bus), SEEK_CUR);
            fwrite(&bus, sizeof(bus), 1, fp);
            printf("Seats Cancelled Successfully.\n");

            fclose(fp);
            return;
        }
    }

    printf("Bus Not Found.\n");

    fclose(fp);
}

void deleteBus()
{
    FILE *fp, *temp_fp;
    struct Bus bus;
    int bus_number;
    int found = 0; // Flag to indicate if bus is found
    fp = fopen("buses.txt", "rb"); // Update file mode to "rb" for reading binary data
    temp_fp = fopen("temp.txt", "wb"); // Update file mode to "wb" for writing binary data

    if (fp == NULL || temp_fp == NULL)
    {
        printf("Error: File could not be opened.\n");
        return;
    }

    printf("Enter Bus Number to Delete: ");
    scanf("%d", &bus_number);

    while (fread(&bus, sizeof(bus), 1, fp) == 1)
    {
        if (bus.bus_number == bus_number)
        {
            found = 1;
            continue; // Skip writing the bus to the temp file
        }
        fwrite(&bus, sizeof(bus), 1, temp_fp);
    }

    fclose(fp);
    fclose(temp_fp);

    if (found)
    {
        remove("buses.txt"); // Delete the original file
        rename("temp.txt", "buses.txt"); // Rename the temp file to original file name
        printf("Bus with Bus Number %d has been deleted successfully.\n", bus_number);
    }
    else
    {
        remove("temp.txt"); // Delete the temp file
        printf("Bus with Bus Number %d not found.\n", bus_number);
    }
}



void updateBus()
{
    FILE *fp;
    struct Bus bus;
    int bus_number, choice;

    fp = fopen("buses.txt", "r+");

    if (fp == NULL)
    {
        printf("Error: File could not be opened.\n");
        return;
    }

    printf("Enter Bus Number: ");
    scanf("%d", &bus_number);

    while (fread(&bus, sizeof(bus), 1, fp))
    {
        if (bus.bus_number == bus_number)
        {
            printf("\nWhat would you like to update:\n");
            printf("1. Bus Number\n");
            printf("2. Route\n");
            printf("3. Fare\n");
            printf("4. Seats Available\n");
            printf("Enter Your Choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Enter New Bus Number: ");
                    scanf("%d", &bus.bus_number);
                    break;

                case 2:
                    printf("Enter New Route (Source-Destination): ");
                    scanf("%s", bus.route);
                    break;

                case 3:
                    printf("Enter New Fare: ");
                    scanf("%d", &bus.fare);
                    break;

                case 4:
                    printf("Enter New Seats Available: ");
                    scanf("%d", &bus.seats_available);
                    break;

                default:
                    printf("Invalid Choice. Try Again.\n");
                    fclose(fp);
                    return;
            }

            fseek(fp, -sizeof(bus), SEEK_CUR);
            fwrite(&bus, sizeof(bus), 1, fp);
            printf("Bus Details Updated Successfully.\n");

            fclose(fp);
            return;
        }
    }

    printf("Bus Not Found.\n");

    fclose(fp);
}


int main()
{
int choice;
char route[50];
// Password Check
        char correct_password[9]="12345678";
        char input_password[9];
        printf("Enter Password (Must be 8 digits) : ");
        int i;
        for (i=0;i<8;i++)
        {
            input_password[i]=getch();
            printf("*");
        }
        input_password[8]='\0';
        if (strcmp(input_password, correct_password) == 0)
        {
            printf("\n----Welcome----");
        }
		else
        {
            printf("\nWrong Password!!");
            exit(1);
        }
 

do {
    printf("\nWelcome to Bus Reservation System\n");
    printf("---------------------------------\n");
    printf("1. Display Buses\n");
    printf("2. Add Bus\n");
    printf("3. Book Seat\n");
    printf("4. Cancel Seat\n");
    printf("5. Delete Bus\n");
    printf("6. Update Bus Details\n");
    printf("7. Exit\n");

    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter Route (Source-Destination): ");
        scanf("%s", route);
        displayBuses(route);
        break;

    case 2:
        AddBus();
        break;

    case 3:
        bookSeat();
        break;

    case 4:
        cancelSeat();
        break;

    case 5:
        deleteBus();
        break;

    case 6:
        updateBus();
        
        break;
    case 7:
        printf("Thank you for using Electronic Bus Ticket Generator.\n");
        return 0;
    default:
        printf("Invalid Choice. Try Again.\n");
        break;
    }
} while(choice != 0);

return 0;
}