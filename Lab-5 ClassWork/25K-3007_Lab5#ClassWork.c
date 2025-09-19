#include <stdio.h>

int main() {
    int device, code;
    printf("Enter Device\n--------------\n1 for Laptop\n2 for Smartphone\n3 for Router\n--------------\n");
    scanf("%d",&device);
    printf("--------------\n");
    switch (device) {
        case 1: printf("Laptop Selected"); break;
        case 2: printf("Smartphone Selected"); break;
        case 3: printf("Router Selected"); break;
        default: printf("Enter Valid Device"); break;
    }
    printf("\n--------------\nEnter Sympton Code\n--------------\n");
    if(device == 1){
        printf("10 for Won't turn on\n11 for Overheating\n12 for Slow perfomance\n--------------\n");
        scanf("%d",&code);
        switch (code) {
        case 10: printf("Check power adapter and battery connections. Try a different power outlet. Remove battery and hold power button for 30 seconds."); break;
        case 11: printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage."); break;
        case 12: printf("Run system diagnostics and check resource usage. Scan  for malware. Upgrade RAM if necessary. Defragment hard drive."); break;
        default: printf("Enter Valid code"); break;
        }
    }else if(device == 2){
        printf("20 for Battery drains fast\n21 for No signal\n22 for Touchscreen unresponsive\n--------------\n");
        scanf("%d",&code);
        switch (code) {
        case 20: printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features."); break;
        case 21: printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages."); break;
        case 22: printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updates."); break;
        default: printf("Enter Valid code"); break;
    }
    }else if(device == 3){
        printf("30 for No internet connection\n31 for Wi-Fi signal weak\n32 for Device can't connect\n--------------\n");
        scanf("%d",&code);
        switch (code) {
        case 30: printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription."); break;
        case 31: printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender"); break;
        case 32: printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts."); break;
        default: printf("Enter Valid code"); break;
    }
    }
    return 0;
}
