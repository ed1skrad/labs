int main() {
    
    int country;//creating integer variable
    
    printf("Choose coutry(1 - Belarus, 2 - Russia, 3 - Germany, 4 - France, 5 - Spain, 6 - United Kingdom, 7 - Sweden, 8 - Norway, 9 - Denmark, 10 - Finland:\n"); 
 
    scanf("%d", &country);    
    
    if(country > 10 || country <= 0) //checking for a numeric condition
    {
        printf("Wrong input.");
    }
    
    switch(country) // main construction
    {
        case 1:
            printf("The capital of Belarus is Minsk.");
        break;
            
        case 2:
            printf("The capital of Russia is Moscow.");
        break;
        
        case 3:
            printf("The capital of Germany is Berlin.");
        break;
        
        case 4:
            printf("The capital of France is Paris.");
        break;
        
        case 5:
            printf("The capital of Spain is Madrid.");
        break;
        
        case 6:
            printf("The capital of UK is London.");
        break;
        
        case 7:
            printf("The capital of Sweden is Stockholm.");
        break;
        
        case 8:
            printf("The capital of Norway is Oslo.");
        break;
        
        case 9:
            printf("The capital of Denmark is Copenhagen.");
        break;
        
        case 10:
            printf("The capital of Finland is Helsinki.");
        break;
    }
               
    return 0;
}

