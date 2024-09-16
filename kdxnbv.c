int main(){
    int num;
    char ch;
    float f;
 
    // --- Integer ---
 
    // Input the integer
    printf("Enter the integer: ");
    scanf("%d", &num);
 
    // Output the integer
    printf("\nEntered integer is: %d", num);
 
    // --- Float ---
   
    //For input Clearing buffer
      while((getchar()) != '\n');
 
    // Input the float
    printf("\n\nEnter the float: ");
    scanf("%f", &f);
 
    // Output the float
    printf("\nEntered float is: %f", f);
 
    // --- Character ---
 
    // Input the Character
    printf("\n\nEnter the Character: ");
    scanf("%c", &ch);
 
    // Output the Character
    printf("\nEntered character is: %c", ch);
 
    return 0;
}