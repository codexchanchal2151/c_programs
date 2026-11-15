#include <stdio.h>

int main() {
    int vehicleType;

    printf("--- Highway Toll Tax Calculator ---\n");
    printf("1. Two-Wheeler (Bike/Scooter)\n");
    printf("2. Car / Jeep / Van\n");
    printf("3. Light Commercial Vehicle (LCV)\n");
    printf("4. Bus / Truck\n");
    printf("5. Heavy Construction Machinery\n");
    printf("Select your vehicle type (1-5): ");
    scanf("%d", &vehicleType);

    switch (vehicleType) {
        case 1:
            printf("Vehicle: Two-Wheeler | Toll Tax: Free (Rs. 0)\n");
            break;
        case 2:
            printf("Vehicle: Car/Jeep/Van | Toll Tax: Rs. 85\n");
            break;
        case 3:
            printf("Vehicle: LCV | Toll Tax: Rs. 140\n");
            break;
        case 4:
            printf("Vehicle: Bus/Truck | Toll Tax: Rs. 295\n");
            break;
        case 5:
            printf("Vehicle: Heavy Machinery | Toll Tax: Rs. 460\n");
            break;
        default:
            printf("Invalid vehicle type entered!\n");
    }

    return 0;
}
