    float R1 = 0;
    float R2 = 0;
    float series = 0;
    float parallel = 0;

    printf("Enter value for R1: ");
    scanf("%f", &R1);

    printf("Enter value for R2: ");
    scanf("%f", &R2);

    series = (R1 + R2);
    parallel = (R1 * R2) / (R1 + R2);

    printf("Total series is: %.2f Ohm\n", series);
    printf("Total prarallel is: %.2f Ohm\n", parallel);