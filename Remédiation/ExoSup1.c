main()
{
   char STR[6];	   
   puts("Entrez un nombre :");
   gets(STR);
   if(strlen(STR)>6)
   {
   	printf("Erreur, nombre trop grand");
   }
   else
   {
    printf("Valeur utilisateur  = %s \n", STR);
    printf("Valeur numérique = %d \n", atoi(STR));
   }
}

