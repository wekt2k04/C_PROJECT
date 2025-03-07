#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include<ctype.h>

#define TAILLE_MAX 100
#define TAILLE_MAX 100
#define MAX_PRODUITS 100
#define MAX_NOM_PRODUIT 50

typedef struct {
 char fnom[TAILLE_MAX];
 char fpnom[TAILLE_MAX];
 char nom_artisanat[TAILLE_MAX];
 char fadresse[TAILLE_MAX];
 char fmail[TAILLE_MAX];
 char fm_pass[TAILLE_MAX];
 char fn_tel[TAILLE_MAX];
 char fhobby[TAILLE_MAX];
 char fannee_naissance[TAILLE_MAX];
 char fgrandmere_name[TAILLE_MAX];
} fournisseur;

typedef struct{
char demande_client[500];

}cli_dem;
typedef struct {
    char artisanat[500];
} ar;

typedef struct {
    char fournisseur[500];
} fo;

typedef struct {
    char message_client[500];
} cli_mes;

typedef struct {
    char message_fournisseur[500];
} fou_mes;

void  boite_de_message_fournisseur(char caractere[100]);
int ftestmail(char *input);
int ftestname(char *input);
int ftestphone(char *input);
int ftestpassword(char *input);
int fcheck_pass(FILE *fic, char word[TAILLE_MAX]);
int fcheck_email(FILE *fic, char email[TAILLE_MAX]);
int check_file(FILE *file_fic, char chaine[TAILLE_MAX]);
int fcheck_file(FILE *file_fic, char chaine[TAILLE_MAX]);
int fcheck_date_naissance(FILE *dob_fic, char dob[TAILLE_MAX]);
int fcheck_name_grandmere(FILE *grand_mere_fic, char grand_mere[TAILLE_MAX]);
int freplace_file_content(const char *original_file, const char *temp_file);
void freplace_password(FILE *pass_fic, const char *old_password, const char *new_password);
void displayAboutPlatform();
void conditionutilisation();
void aideetsupport();
void achat(char caractere[100]);
void acepter_demande(char caractere[100]);
void boite_de_message(char caractere[100]);
void achat(char caractere[100]);

typedef struct {
    char nom[TAILLE_MAX];
    char pnom[TAILLE_MAX];
    char adresse[TAILLE_MAX];
    char mail[TAILLE_MAX];
    char m_pass[TAILLE_MAX];
    char n_tel[TAILLE_MAX];
    char hobby[TAILLE_MAX];
    char annee_naissance[TAILLE_MAX];
    char grandmere_name[TAILLE_MAX];
} client;


// Définition des fonctions pour chaque couleur
void printfRed(char *string);

void printfGreen(char *string);

void printfBlue(char *string);

void printfMagenta(char *string);

void printfCyan(char *string);

void printfYellow(char *string);

// Définition de la fonction VisitAfrica
void VisitAfrica();
// Fonction pour afficher le menu principal
void afficherMenuPrincipal();
// Fonction pour afficher le menu qui permet de choisr compte client ou fournisseur
void afficherMenuClientFournisseur();

int testmail(char *input);
int testname(char *input);
int testphone(char *input);
int testpassword(char *input);
int check_pass(FILE *fic, char word[TAILLE_MAX]);
int check_email(FILE *fic, char email[TAILLE_MAX]);
int check_hobby(FILE *hobby_fic, char hobby[TAILLE_MAX]);
int check_date_naissance(FILE *dob_fic, char dob[TAILLE_MAX]);
int check_name_grandmere(FILE *grand_mere_fic, char grand_mere[TAILLE_MAX]);
int replace_file_content(const char *original_file, const char *temp_file);
void replace_password(FILE *pass_fic, const char *old_password, const char *new_password);
void afficherMenuConnexion_inscription();
void afficherChoix3();
void inscription();
void artisanat();
void connexion();
void confirmation(char caractere[100]);

int main() {
    char choix1; // Le choix du menu principal peut prendre 5 valeurs {1,2,3,4,5}
    int choix2; // Le choix du menu client-fournisseur peut prendre 2 valeurs {1,2}
    int c1 = 0, c2 = -1, c3 = -1, c4 = -1, c5 = -1, c6 = -1, c7 = -1, c8 = -1, c9 = -1, c10 = -1;
    int f1 = 0, f2 = -1, f3 = -1, f4 = -1, f5 = -1, f6 = -1, f7 = -1, f8 = -1, f9 = -1, f10 = -1;
    char fm_pass1[TAILLE_MAX];
    int fchoixq;
    char fchoixquestion;
    char fchoixquestion2;
    fournisseur f;
    char m_pass1[TAILLE_MAX];
    int choixq;
    char choixquestion;
    char choixquestion2;
    client c;
    int choixemail,fchoixemail;
    int choixverfication,fchoixverfication;
    char new_password[TAILLE_MAX];
    char fnew_password[TAILLE_MAX];
    int choixh;
    int choixa;
    int choixg;
    int fchoixh;
    int fchoixa;
    int fchoixg;
    char pays[20];
    int choixPays;
    int n;
    char typeArtisanat[50];
    char descreption[500];
    char pay[TAILLE_MAX];
    int client_choisie;
    int o=0;
    int fournisseur_choisie;
    char fournis_nom[100];
    char ecs;
    menuprincipal2 :
    system("cls");
    saisie_choix2 :
    afficherMenuPrincipal();//afficher le Menu principal

    saisie_choix : //etiquette de GOTO pour que on peut revenir a cette ligne si l'utilisateur tape un coix invalid
    afficherChoix1();//     Afficher la barre ou l'utilisateur v taper son choix
    scanf(" %s", &choix1);


        switch(choix1) {
            case '1':
                  menuclient_fournisseur :

                fmenuclientfournisseurh :
                menuclientfournisseurh :
                    Rentrernom2:
                  system("cls");//pour supprimer le contenu de la page

                  VisitAfrica();

                 afficherMenuClientFournisseur();

                 afficherChoix2();
                 scanf("%d",&choix2);

                 switch(choix2){ //switch pour choisir le type du compte
                    case 1 : //compte client

                                    newconnexion :
                                        newconnection_after_inscription :



                                    system("cls");
                                    VisitAfrica();
                                    printf("\n\t  Votre exp%crience client commence ici !",130);
                                    printfYellow("Connectez-vous ou inscrivez-vous");
                                    printf(" pour d%ccouvrir nos produits et services.\n",130);
                                    afficherMenuConnexion_inscription();
                                    afficherChoix3();
                                    scanf("%d", &c1);


                            FILE *nom_fichier = fopen("client_nom.txt", "a+");
                            FILE *pnom_fichier = fopen("client_pnom.txt", "a+");
                            FILE *adresse_fichier = fopen("client_adresse.txt", "a+");
                            FILE *mail_fichier = fopen("client_mail.txt", "a+");
                            FILE *pass_fichier = fopen("client_pass.txt", "a+");
                            FILE *tel_fichier = fopen("client_tel.txt", "a+");
                            FILE *hobby_fichier = fopen("client_hobby.txt", "a+");
                            FILE *grandmere_fichier = fopen("client_grandmere.txt", "a+");
                            FILE *annee_naissance_fichier = fopen("client_annee_naissance.txt", "a+");



                            if (nom_fichier == NULL || pnom_fichier == NULL || adresse_fichier == NULL || mail_fichier == NULL || pass_fichier == NULL || tel_fichier == NULL || hobby_fichier == NULL ) {
                                printf("Erreur lors de l'ouverture des fichiers.\n");
                                exit(EXIT_FAILURE);
                            }

                            switch (c1) {
                                        case 2://connexion du client


                                                entrernouveaumotpass :

                                                system("cls");
                                                connexion();
                                                nouveauconnexion:

                                                printf("\n\n\n\n\t\t\t\tEmail        : ");
                                                scanf(" %[^\n]", c.mail);
                                                c2 = testmail(c.mail);
                                                emailconnexion :
                                                if (c2 != 1){
                                                    system("cls");
                                                    connexion();
                                                    printf("\n\n\t\t\t\033[1;31m*Erreur :L'adresse email est invalide. Assurez-vous d'inclure  '@' dans votre adresse email.\n\033[0m");
                                                    printf("\n\t\t\t\tEmail        : ");
                                                    scanf(" %[^\n]", c.mail);
                                                    c2 = testmail(c.mail);
                                                    if(c2 != 1)
                                                        goto emailconnexion;

                                                }



                                                    printf("\n\n\n\t\t\t\tMot de passe : ");
                                                    int i = 0;
                                                    while (1) {
                                                        char ch = getch();
                                                        if (ch == 13) {
                                                            c.m_pass[i] = '\0';
                                                            break;
                                                        }
                                                        else if (ch == 8) {
                                                            if (i > 0) {
                                                                printf("\b \b");
                                                                i--;
                                                            }
                                                        }
                                                        else {
                                                            c.m_pass[i++] = ch;
                                                            printf("*");
                                                        }
                                                    }
                                                    c.m_pass[i] = '\0';
                                                    printf("\n");

                                                    c6 = check_pass(pass_fichier, c.m_pass);
                                                    c7 = check_email(mail_fichier, c.mail);
                                                    if (c6 == 1 && c7 == 1)
                                                        printf("\t\t\t\t\033[32mConnexion r%cussie !\033[0m\n", 130);
                                                    else {
                                                        printf("\n\t\t\t\t\t\t\t\033[31mConnexion %cchou%ce !\033[0m\n", 130, 130);
                                                        printf("\n\t\t\t\t\033[34m  [1]. Ressaisissez votre e-mail et mot de passe\033[0m\n");
                                                        printf("\033[34m\n\t\t\t\t  [2]. Mot de passe oubli%ce\n\033[0m", 130);
                                                        printfBlue("\n\t\t\t\t\tVotre choix :  ");

                                                        scanf("%d", &choixq);
                                                        switch (choixq) {
                                                                        case 1:
                                                                                system("cls");
                                                                                connexion();

                                                                                goto nouveauconnexion;
                                                                                break;
                                                                        case 2:
                                                                                rentereemail : //pour rentrer l'eamil au cas l'email n'est correct

                                                                                system("cls");
                                                                                connexion();
                                                                                printfBlue("\n\t\t\t\t\t\tMODIFICATION DU MOT DE PASSE :");
                                                                                printf("\n\n\n\n\t\t\t\tEmail        : ");
                                                                                scanf(" %[^\n]", c.mail);
                                                                                c7 = check_email(mail_fichier, c.mail);
                                                                                if (c7 != 1){
                                                                                    printf("\n\t\t\t\t\033[31mD%csol%c, l'adresse e-mail n'est pas enregistr%ce\033[0m\n",130,130,130);
                                                                                    printf("\n\t\t\t\t\t\t\033[34m [1]. Rentrez votre e-mail :\033[0m\n");
                                                                                    printf("\033[34m\n\t\t\t\t\t\t  [2]. Inscrivez \n\033[0m");
                                                                                    erreurenteremail : //si le client a entre un choix invalid
                                                                                    printfBlue("\n\t\t\t\t\t\t\tVotre choix :  ");
                                                                                    scanf("%d",&choixemail);
                                                                                    switch(choixemail){
                                                                                    case 1 :
                                                                                        goto rentereemail;
                                                                                        break;
                                                                                    case 2 :
                                                                                        goto inscrireanouveau; //inscription si le client n'a pas un compte
                                                                                        break;
                                                                                    default :
                                                                                        printfRed("\n\t\t\t\tChoix invalid ,entrez s'il vous plait soit 1 ou 2");
                                                                                        goto erreurenteremail;
                                                                                        break;
                                                                                    }
                                                                                }


                                                                                newreponsehobby :
                                                                                newresponseannee :
                                                                                newresponsgrandmere :

                                                                                printf("\n\n\t\t\t Choisissez une question de s%ccurit%c :\n",130,130);
                                                                                printf("\n\t\t\t\t\t\033[34m  (a) Entrer vos loisirs favoris\033[0m\n");
                                                                                printf("\t\t\t\t\t\033[34m  (b) Entrer votre date de naissance\033[0m\n");
                                                                                printf("\t\t\t\t\t\033[34m  (c) Entrer le nom de votre grand-m%cre\033[0m\n",138);
                                                                                printfBlue("\n\t\t\t\t\tVeuillez entrer votre choix :  ");
                                                                                scanf(" %c", &choixquestion);
                                                                                switch (choixquestion) {
                                                                                                        case 'a':
                                                                                                                    printf("\n\t\t\t\tVotre r%cponse :  ",130);
                                                                                                                    scanf(" %[^\n]", c.hobby);
                                                                                                                    c8 = check_file(hobby_fichier, c.hobby);
                                                                                                                    if (c8 == 1) {


                                                                                                                        newpass :
                                                                                                                        system("cls");
                                                                                                                        connexion();
                                                                                                                        printfGreen("\n\n\t\t\t\tVous pouvez modifier votre mot de passe ");
                                                                                                                        printf("\n\n\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffre et une lettre majuscule\n\033[0m",138);
                                                                                                                        printf("\n\n\n\t\t\t\tNouveau mot de passe : ");
                                                                                                                        int i = 0;
                                                                                                                        while (1) {
                                                                                                                            char ch = getch(); // Read a character without echoing it to the screen

                                                                                                                            if (ch == 13) { // ASCII value for Enter key
                                                                                                                                new_password[i] = '\0'; // Null-terminate the string
                                                                                                                                break;
                                                                                                                            } else if (ch == 8) { // ASCII value for Backspace key
                                                                                                                                if (i > 0) {
                                                                                                                                    printf("\b \b"); // Move the cursor back, overwrite the character with a space, move the cursor back again
                                                                                                                                    i--; // Move back one position in the string
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                // Check if the maximum length of the password is reached
                                                                                                                                if (i < TAILLE_MAX - 1) {
                                                                                                                                    new_password[i++] = ch; // Add the character to the password
                                                                                                                                    printf("*"); // Print an asterisk (*) to represent the character
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                        printf("\n");
                                                                                                                        c5 = testpassword(new_password);
                                                                                                                        if(c5 != 1)
                                                                                                                            goto newpass;
                                                                                                                        add_password(pass_fichier, new_password);
                                                                                                                        printf("\n\n\t\t\t\t\033[34m votre mot de passe est modifi%c\n033[0m",310);
                                                                                                                        }
                                                                                                                        else {

                                                                                                                            printf("\n\t\t\t\t\033[34m  [1]. Choissisez une autre question\033[0m\n",130);
                                                                                                                            printf("\033[34m\n\t\t\t\t  [2]. Menu Inscription\Connexion\n\033[0m", 130);
                                                                                                                            printfBlue("\n\t\t\t\t\tVotre choix :  ");
                                                                                                                            scanf("%d", &choixh);
                                                                                                                            switch(choixh){
                                                                                                                                case 1 : goto newreponsehobby;
                                                                                                                                         break;
                                                                                                                                case 2 : goto menuclientfournisseurh;
                                                                                                                                        break;

                                                                                                                            }
                                                                                                                        }
                                                                                                                    break;

                                                                                                        case 'b':

                                                                                                                printf("\n\t\t\t\tVotre r%cponse :  ",130);
                                                                                                                    scanf(" %[^\n]", c.annee_naissance);
                                                                                                                    c9 = check_file(annee_naissance_fichier, c.annee_naissance);
                                                                                                                    if (c9 == 1) {


                                                                                                                        newpass1 :
                                                                                                                        system("cls");
                                                                                                                        connexion();
                                                                                                                        printfGreen("\n\n\t\t\t\tVous pouvez modifier votre mot de passe ");
                                                                                                                        printf("\n\n\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffre et une lettre majuscule\n\033[0m",138);
                                                                                                                        printf("\n\n\n\t\t\t\tNouveau mot de passe : ");
                                                                                                                        int i = 0;
                                                                                                                        while (1) {
                                                                                                                            char ch = getch(); // Read a character without echoing it to the screen

                                                                                                                            if (ch == 13) { // ASCII value for Enter key
                                                                                                                                new_password[i] = '\0'; // Null-terminate the string
                                                                                                                                break;
                                                                                                                            } else if (ch == 8) { // ASCII value for Backspace key
                                                                                                                                if (i > 0) {
                                                                                                                                    printf("\b \b"); // Move the cursor back, overwrite the character with a space, move the cursor back again
                                                                                                                                    i--; // Move back one position in the string
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                // Check if the maximum length of the password is reached
                                                                                                                                if (i < TAILLE_MAX - 1) {
                                                                                                                                    new_password[i++] = ch; // Add the character to the password
                                                                                                                                    printf("*"); // Print an asterisk (*) to represent the character
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                        printf("\n");
                                                                                                                        c5 = testpassword(new_password);
                                                                                                                        if(c5 != 1)
                                                                                                                            goto newpass1;
                                                                                                                        add_password(pass_fichier, new_password);
                                                                                                                        printf("\n\n\t\t\t\t\033[34m votre mot de passe est modifi%c\n033[0m",310);

                                                                                                                        }
                                                                                                                        else {

                                                                                                                            printf("\n\t\t\t\t\033[34m  [1]. Choissisez une autre question\033[0m\n",130);
                                                                                                                            printf("\033[34m\n\t\t\t\t  [2]. Menu Inscription\Connexion\n\033[0m", 130);
                                                                                                                            printfBlue("\n\t\t\t\t\tVotre choix :  ");
                                                                                                                            scanf("%d", &choixa);
                                                                                                                            switch(choixa){
                                                                                                                                case 1 : goto newresponseannee;
                                                                                                                                         break;
                                                                                                                                case 2 : goto menuclientfournisseurh;
                                                                                                                                        break;

                                                                                                                            }
                                                                                                                        }
                                                                                                                break;
                                                                                                        case 'c':

                                                                                                                printf("\n\t\t\t\tVotre r%cponse :  ",130);
                                                                                                                    scanf(" %[^\n]", c.grandmere_name);
                                                                                                                    c10 = check_file(grandmere_fichier, c.grandmere_name);
                                                                                                                    if (c10 == 1) {


                                                                                                                        newpass2 :
                                                                                                                        system("cls");
                                                                                                                        connexion();
                                                                                                                        printfGreen("\n\n\t\t\t\tVous pouvez modifier votre mot de passe ");
                                                                                                                        printf("\n\n\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffre et une lettre majuscule\n\033[0m",138);
                                                                                                                        printf("\n\n\n\t\t\t\tNouveau mot de passe : ");
                                                                                                                        int i = 0;
                                                                                                                        while (1) {
                                                                                                                            char ch = getch(); // Read a character without echoing it to the screen

                                                                                                                            if (ch == 13) { // ASCII value for Enter key
                                                                                                                                new_password[i] = '\0'; // Null-terminate the string
                                                                                                                                break;
                                                                                                                            } else if (ch == 8) { // ASCII value for Backspace key
                                                                                                                                if (i > 0) {
                                                                                                                                    printf("\b \b"); // Move the cursor back, overwrite the character with a space, move the cursor back again
                                                                                                                                    i--; // Move back one position in the string
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                // Check if the maximum length of the password is reached
                                                                                                                                if (i < TAILLE_MAX - 1) {
                                                                                                                                    new_password[i++] = ch; // Add the character to the password
                                                                                                                                    printf("*"); // Print an asterisk (*) to represent the character
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                        printf("\n");
                                                                                                                        c5 = testpassword(new_password);
                                                                                                                        if(c5 != 1)
                                                                                                                            goto newpass2;
                                                                                                                        add_password(pass_fichier,new_password);
                                                                                                                        fclose(pass_fichier);
                                                                                                                        goto newconnexion;
                                                                                                                        printfGreen("\n\n\t\t\t\tvotre mot de passe est modifie");

                                                                                                                        }
                                                                                                                        else {

                                                                                                                            printf("\n\t\t\t\t\033[34m  [1]. Choissisez une autre question\033[0m\n",130);
                                                                                                                            printf("\033[34m\n\t\t\t\t  [2]. Menu Inscription\Connexion\n\033[0m", 130);
                                                                                                                            printfBlue("\n\t\t\t\t\tVotre choix :  ");
                                                                                                                            scanf("%d", &choixg);
                                                                                                                            switch(choixg){
                                                                                                                                case 1 : goto newresponsgrandmere;
                                                                                                                                         break;
                                                                                                                                case 2 : goto menuclientfournisseurh;
                                                                                                                                        break;

                                                                                                                            }
                                                                                                                        }
                                                                                                                break;
                                                                                                    }
                                                        }
                                                    }
                                                    FILE *fichier_email_connexion = fopen(c.mail, "a+");
                                                    char mot[100];
                                                    char nom_pnom_fichier[TAILLE_MAX];
                                                    char adresse_fichier1[TAILLE_MAX];
                                                    while (fgets(mot, sizeof(mot), fichier_email_connexion) != NULL) {
                                                    strcpy(nom_pnom_fichier, mot);

                                                  }
                                                    fclose(fichier_email_connexion);
                                                    FILE *fichier_adresse_connexion = fopen(c.m_pass, "a+");
                                                    while (fgets(mot, sizeof(mot), fichier_adresse_connexion) != NULL) {
                                                    strcpy(adresse_fichier1, mot);


                                                  }
                                                   fclose(fichier_adresse_connexion);


                                                    do {
                                                       clientachat :
                                                    menuboite_message :
                                                    menuaccepter_demande :
                                                        menuachat :
                                                       system("cls");
                                                        printfBlue("\t[1] . Boite de messages\t\t[2] .Acheter un produit\t\t[3] .Confirmation d'achat\n");
                                                        printfYellow("\n\t\t\t Votre choix :  ");
                                                        scanf("%d", &client_choisie);
                                                        switch (client_choisie) {
                                                            case 1:
                                                                boite_de_message(nom_pnom_fichier);
                                                                char ch3;
                                                                printf("\n\t\t\tTapez Q pour revenir au menu et AUTRE BUTTON pour exiter :");
                                                                scanf(" %c",&ch3);
                                                                if(ch3 == 'q' || ch3 == 'Q'){
                                                                    goto menuboite_message;
                                                                }
                                                                else{
                                                                    exit(0);
                                                                }
                                                                break;
                                                            case 2:
                                                                achat(nom_pnom_fichier);
                                                                 char ch5;
                                                                printf("\n\t\t\tTapez Q pour revenir au menu et AUTRE BUTTON pour exiter :");
                                                                scanf(" %c",&ch5);
                                                                if(ch5 == 'q' || ch5 == 'Q'){
                                                                    goto menuachat;
                                                                }
                                                                else{
                                                                    exit(0);
                                                                }


                                                                break;
                                                            case 3:
                                                                acepter_demande(adresse_fichier1);
                                                                 char ch4;
                                                                printf("\n\t\t\tTapez Q pour revenir au menu et AUTRE BUTTON pour exiter :");
                                                                scanf(" %c",&ch4);
                                                                if(ch4 == 'q' || ch4 == 'Q'){
                                                                    goto menuaccepter_demande;
                                                                }
                                                                else{
                                                                    exit(0);
                                                                }

                                                                break;
                                                            default:

                                                                goto clientachat;
                                                                break;
                                                        }
                                                        } while (client_choisie != 1 && client_choisie != 2);



                                    break;

                                    case 1: //inscription client
                                            nouveau_question :
                                            inscrireanouveau :

                                            system("cls");
                                            inscription();
                                            printf("\n\n\n\t\t\t   Nom       :         ");
                                            scanf(" %[^\n]", c.nom);


                                            c3 = testname(c.nom);
                                                nom :
                                            if(c3 != 1){

                                            system("cls");
                                            inscription();
                                            printf("\033[1;31m\n\t\t\t\tErreur :*Nom contient des chiffres ou des symboles\n\033[0m");
                                            printf("\n\t\t\t   Nom       :         ");
                                            scanf(" %[^\n]", c.nom);
                                            c3 = testname(c.nom);
                                                if(c3 != 1){
                                                    goto nom;
                                                }

                                            }

                                            printf("\n");
                                            c3 = -1;

                                                printf("\n\n\t\t\t   Pr%cnom    :         ", 130);
                                                scanf(" %[^\n]", c.pnom);


                                                prenom :
                                                if(c3 != 1){
                                                    system("cls");
                                                    inscription();
                                                    printf("\n\n\n\t\t\t   Nom       :         %s",c.nom);
                                                    printf("\033[1;31m\n\n\t\t\tErreur :*Pr%cnom contient des chiffres ou des symboles\n\033[0m", 130);
                                                    printf("\n\t\t\t   Pr%cnom    :         ", 130);
                                                    scanf(" %[^\n]", c.pnom);
                                                    c3 = testname(c.pnom);
                                                    if(c3 != 1)
                                                        goto prenom;
                                                    }

                                            printf("\n");
                                            do {
                                                printf("\n\n\t\t\t   Adresse   :         ");
                                                scanf(" %[^\n]", c.adresse);
                                            } while (strlen(c.adresse) == 0);

                                                printf("\n\n\n\t\t\t   E-mail    :         ");
                                                scanf(" %[^\n]", c.mail);
                                                c2 = testmail(c.mail);
                                                email :
                                                if(c2 != 1){
                                                    system("cls");
                                                    inscription();
                                                    printf("\n\n\n\t\t\t   Nom       :         %s",c.nom);
                                                    printf("\n\n\n\n\t\t\t   Pr%cnom    :         %s", 130,c.pnom);
                                                    printf("\n\n\n\n\t\t\t   Adresse   :         %s",c.adresse);
                                                    printf("\n\n\t\t\t\033[1;31m*Erreur :L'adresse email est invalide. Assurez-vous d'inclure le symbole '@' dans votre adresse email.\n\033[0m");
                                                    printf("\n\t\t\t   E-mail    :         ");
                                                    scanf(" %[^\n]", c.mail);
                                                    c2 = testmail(c.mail);
                                                    if(c2 != 1)
                                                        goto email;
                                                }

                                                    printf("\n\n\n\t\t\t   T%cl       :         ",130);
                                                    scanf(" %[^\n]", c.n_tel);
                                                    c4 = testphone(c.n_tel);
                                                    mail :
                                                    if(c4 != 1){
                                                        system("cls");
                                                        inscription();
                                                        printf("\n\n\n\t\t\t   Nom       :         %s",c.nom);
                                                        printf("\n\n\n\n\t\t\t   Pr%cnom    :         %s", 130,c.pnom);
                                                        printf("\n\n\n\n\t\t\t   Adresse   :         %s",c.adresse);
                                                        printf("\n\n\n\n\t\t\t   E-mail    :         %s",c.mail);
                                                        printf("\n\n\t\t\t\033[1;31m*Erreur :Le num%cro de t%cl%cphone est invalide. Assurez-vous qu'il commence par '+'.\n\033[0m",130,130,130);
                                                        printf("\n\n\t\t\t   T%cl       :         ",130);
                                                        scanf(" %[^\n]", c.n_tel);
                                                        c4 = testphone(c.n_tel);
                                                        if(c4 != 1)
                                                            goto mail;

                                                    }
                                                        changer_motpasse :
                                                        printf("\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffre et une lettre majuscule\n\033[0m",138);
                                                        printf("\n\t\t\t  Mot de passe :          ");
                                                        int j = 0;
                                                        while (1) {
                                                            char ch = getch();
                                                            if (ch == 13) {
                                                                c.m_pass[j] = '\0';
                                                                break;
                                                            } else if (ch == 8) {
                                                                if (j > 0) {
                                                                printf("\b \b");
                                                                j--;
                                                            }
                                                            } else {
                                                                c.m_pass[j++] = ch;
                                                                printf("*");
                                                            }
                                                        }
                                                        c.m_pass[j] = '\0';
                                                        printf("\n");

                                                        c5 = testpassword(c.m_pass);

                                                        if(c5 != 1){
                                                            mot_pass :
                                                            system("cls");
                                                            inscription();
                                                            printf("\n\n\n\t\t\t   Nom       :         %s",c.nom);
                                                            printf("\n\n\n\n\t\t\t   Pr%cnom    :         %s", 130,c.pnom);
                                                            printf("\n\n\n\n\t\t\t   Adresse   :         %s",c.adresse);
                                                            printf("\n\n\n\n\t\t\t   E-mail    :         %s",c.mail);
                                                            printf("\n\n\n\n\t\t\t   T%cl       :         %s",130,c.n_tel);
                                                            printf("\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffr eet une lettre majuscule\n\033[0m",138);
                                                            printf("\n\n\t\t\t  Mot de passe :          ");

                                                        int j = 0;
                                                        while (1) {
                                                            char ch = getch();
                                                            if (ch == 13) {
                                                                c.m_pass[j] = '\0';
                                                                break;
                                                            } else if (ch == 8) {
                                                                if (j > 0) {
                                                                printf("\b \b");
                                                                j--;
                                                            }
                                                            } else {
                                                                c.m_pass[j++] = ch;
                                                                printf("*");
                                                            }
                                                        }
                                                        c.m_pass[j] = '\0';
                                                        printf("\n");
                                                        c5 = testpassword(c.m_pass);

                                                        }
                                                        if(c5 != 1)
                                                            goto mot_pass;
                                                        nouveauverification :
                                                        verification :

                                                        printf("\n\t\t\t  V%crification :          ", 130);
                                                        int k = 0;
                                                        while (1) {
                                                            char ch = getch();
                                                            if (ch == 13) {
                                                                m_pass1[k] = '\0';
                                                                break;
                                                                } else if (ch == 8) {
                                                                if (k > 0) {
                                                                    printf("\b \b");
                                                                    k--;
                                                                }
                                                                } else {
                                                                    m_pass1[k++] = ch;
                                                                    printf("*");
                                                                }
                                                        }
                                                        m_pass1[k] = '\0';
                                                        printf("\n");
                                                    if (strcmp(c.m_pass, m_pass1) != 0){
                                                        printfRed("\n\t\t\tmot de passe incorrect");

                                                        printf("\n\t\t\t\t\t\t\033[34m [1]. Rentrez Mot de passe :\033[0m\n");
                                                        printf("\033[34m\n\t\t\t\t\t\t  [2]. changer le Mot de passe \n\033[0m");
                                                        printfBlue("\n\t\t\t\t\t\t\tVotre choix :  ");
                                                        scanf("%d",&choixverfication);
                                                        switch (choixverfication){
                                                            case 1:
                                                                 goto nouveauverification;//client veut rentrer la verification
                                                                 break;
                                                            case 2:
                                                                goto changer_motpasse;
                                                        }
                                                    }
                                                    printf("\n\t\t\t\t\t\033[1;32mLe code est valide.\n\033[0m");


                                                   printf("\n\t\t\tChoisissez une question de s%ccurit%c :\n",130,130);
                                                   printf("\t\t\t\t(a) Entrer vos loisirs favoris\n");
                                                   printf("\t\t\t\t(b) Entrer votre date de naissance\n");
                                                   printf("\t\t\t\t(c) Entrer le nom de votre grand-m%cre\n",138);
                                                   printf("\n\t\t\tVeuillez entrer votre choix :  ");
                                                   scanf(" %c",&choixquestion2);
                                                    switch (choixquestion2){
                                                                            case 'a':
                                                                                    printf("\n\t\t\t\tvotre r%cponse :  ",130);
                                                                                    scanf(" %[^\n]", c.hobby);
                                                                                    fprintf(hobby_fichier, "%s\n", c.hobby);
                                                                                    break;
                                                                            case 'b':
                                                                                    printf("\n\t\t\t\tvotre r%cponse :  ",130);
                                                                                    scanf(" %[^\n]", c.annee_naissance);
                                                                                    fprintf(annee_naissance_fichier, "%s\n", c.annee_naissance);
                                                                                    break;
                                                                            case 'c':
                                                                                    printf("\n\t\t\t\tvotre r%cponse :  ",130);
                                                                                    scanf(" %[^\n]", c.grandmere_name);
                                                                                    fprintf(grandmere_fichier, "%s\n", c.grandmere_name);
                                                                                    break;
                                                    }

                                                    char ch;
                                                printf("\n\t\t\t\tS'il vous plait verifier que les donnees entrees sont jute");
                                                printfBlue("\n\t\t\t\tvous etes sure OUI(O)/AUTRE BUTTON :  ");
                                                scanf(" %c",&ch);

                                                if (ch == 'o'||ch =='O'){
                                                        fprintf(nom_fichier, "%s\n", c.nom);
                                                    fprintf(pnom_fichier, "%s\n", c.pnom);
                                                    fprintf(adresse_fichier, "%s\n", c.adresse);
                                                    fprintf(mail_fichier, "%s\n", c.mail);
                                                    fprintf(tel_fichier, "%s\n", c.n_tel);
                                                    fprintf(pass_fichier, "%s\n", c.m_pass);

                                                    fclose(nom_fichier);
                                                    fclose(pnom_fichier);
                                                    fclose(adresse_fichier);
                                                    fclose(mail_fichier);
                                                    fclose(pass_fichier);
                                                    fclose(tel_fichier);


                                                    FILE *fichier_email = fopen(c.mail, "a+");
                                                    if(fichier_email == NULL){
                                                        printf("Erreur");
                                                    }
                                                    fprintf(fichier_email,"%s %s",c.pnom,c.nom);
                                                    fclose(fichier_email);

                                                    FILE *fichier_adresse = fopen(c.m_pass, "a+");
                                                    if(fichier_email == NULL){
                                                        printf("Erreur");
                                                    }
                                                    fprintf(fichier_email,"%s",c.adresse);
                                                    fclose(fichier_adresse);






                                                    printf("\n\n\t\t\t\t\t\033[1;32mInscription faite avec succ%cs \2\n\033[0m",130);
                                                    goto newconnection_after_inscription;


                                                }

                                                else{

                                                    goto nouveau_question;
                                                }


                                                    break;
                                    case 3 : //quitter au menu client/fournisseur
                                            goto menuclient_fournisseur;
                                            break;
                                    }


                                break;

                    case 2 : //compte fournisseur
                            newconnection_after_inscription1 :
                            system("cls");
                            VisitAfrica();
                            printf("\n\n\t\t\t\t\t\tLib%crez votre cr%cativit%c avec nous !\n \t\t\033[1;33mInscrivez-vous\033[0m ou \033[1;33mconnectez-vous\033[0m maintenant pour acc%cder %c un march%c dynamique et %clargir votre audience.\n\t\t\t\t\t\tVotre \033[1;33martisanat\033[0m m%crite d'%ctre d%ccouvert !\n",130,130,130,130,133,130,130,130,136,130);
                            afficherMenuConnexion_inscription();
                            afficherChoix3();
                            scanf("%d", &f1);


                            FILE *fnom_fichier = fopen("fournisseur_nom.txt", "a+");
                            FILE *fpnom_fichier = fopen("fournisseur_pnom.txt", "a+");
                            FILE *fadresse_fichier = fopen("fournisseur_adresse.txt", "a+");
                            FILE *fmail_fichier = fopen("fournisseur_mail.txt", "a+");
                            FILE *fpass_fichier = fopen("fournisseur_pass.txt", "a+");
                            FILE *ftel_fichier = fopen("fournisseur_tel.txt", "a+");
                            FILE *fhobby_fichier = fopen("fournisseur_hobby.txt", "a+");
                            FILE *fgrandmere_fichier = fopen("fournisseur_grandmere.txt", "a+");
                            FILE *fannee_naissance_fichier = fopen("fournisseur_annee_naissance.txt", "a+");

                            if (fnom_fichier == NULL || fpnom_fichier == NULL || fadresse_fichier == NULL || fmail_fichier == NULL || fpass_fichier == NULL || ftel_fichier == NULL || fhobby_fichier == NULL || fgrandmere_fichier == NULL || fannee_naissance_fichier == NULL) {
                                printf("Erreur lors de l'ouverture des fichiers.\n");
                                exit(EXIT_FAILURE);
                            }

                            switch (f1) {//connexion et inscription
                                        case 2://connexion du fournisseur
                                                fentrernouveaumotpass :

                                                system("cls");
                                                connexion();
                                                fnouveauconnexion:
                                                printf("\n\n\n\n\t\t\t\tEmail        : ");
                                                scanf(" %[^\n]", f.fmail);
                                                f2 = ftestmail(f.fmail);
                                                femailconnexion :
                                                if (f2 != 1){
                                                    system("cls");
                                                    connexion();
                                                    printf("\n\n\t\t\t\033[1;31m*Erreur :L'adresse email est invalide. Assurez-vous d'inclure  '@' dans votre adresse email.\n\033[0m");
                                                    printf("\n\t\t\t\tEmail        : ");
                                                    scanf(" %[^\n]", f.fmail);
                                                    f2 = ftestmail(f.fmail);
                                                    if(f2 != 1)
                                                        goto femailconnexion;

                                                }



                                                    printf("\n\n\n\t\t\t\tMot de passe : ");
                                                    int i = 0;
                                                    while (1) {
                                                        char ch = getch();
                                                        if (ch == 13) {
                                                            f.fm_pass[i] = '\0';
                                                            break;
                                                        }
                                                        else if (ch == 8) {
                                                            if (i > 0) {
                                                                printf("\b \b");
                                                                i--;
                                                            }
                                                        }
                                                        else {
                                                            f.fm_pass[i++] = ch;
                                                            printf("*");
                                                        }
                                                    }
                                                    f.fm_pass[i] = '\0';
                                                    printf("\n");

                                                    f6 = fcheck_pass(fpass_fichier, f.fm_pass);
                                                    f7 = fcheck_email(fmail_fichier, f.fmail);
                                                    if (f6 == 1 && f7 == 1){
                                                        printf("\t\t\t\t\033[32mConnexion r%cussie !\033[0m\n", 130);
                                                    }
                                                    else {
                                                        printf("\n\t\t\t\t\t\t\t\033[31mConnexion %cchou%ce !\033[0m\n", 130, 130);
                                                        printf("\n\t\t\t\t\033[34m  [1]. Ressaisissez votre e-mail et mot de passe\033[0m\n");
                                                        printf("\033[34m\n\t\t\t\t  [2]. Mot de passe oubli%ce\n\033[0m", 130);
                                                        printfBlue("\n\t\t\t\t\tVotre choix :  ");

                                                        scanf("%d", &fchoixq);
                                                        switch (fchoixq) {
                                                                        case 1:
                                                                                system("cls");
                                                                                connexion();

                                                                                goto fnouveauconnexion;
                                                                                break;
                                                                        case 2:
                                                                                frentereemail : //pour rentrer l'eamil au cas l'email n'est correct

                                                                                system("cls");
                                                                                connexion();
                                                                                printfBlue("\n\t\t\t\t\t\tMODIFICATION DU MOT DE PASSE :");
                                                                                printf("\n\n\n\n\t\t\t\tEmail        : ");
                                                                                scanf(" %[^\n]", f.fmail);
                                                                                f7 = fcheck_email(fmail_fichier, f.fmail);
                                                                                if (c7 != 1){
                                                                                    printf("\n\t\t\t\t\033[31mD%csol%c, l'adresse e-mail n'est pas enregistr%ce\033[0m\n",130,130,130);
                                                                                    printf("\n\t\t\t\t\t\t\033[34m [1]. Rentrez votre e-mail :\033[0m\n");
                                                                                    printf("\033[34m\n\t\t\t\t\t\t  [2]. Inscrivez \n\033[0m");
                                                                                    ferreurenteremail : //si le client a entre un choix invalid
                                                                                    printfBlue("\n\t\t\t\t\t\t\tVotre choix :  ");
                                                                                    scanf("%d",&fchoixemail);
                                                                                    switch(fchoixemail){
                                                                                    case 1 :
                                                                                        goto frentereemail;
                                                                                        break;
                                                                                    case 2 :
                                                                                        goto finscrireanouveau; //inscription si le client n'a pas un compte
                                                                                        break;
                                                                                    default :
                                                                                        printfRed("\n\t\t\t\tChoix invalid ,entrez s'il vous plait soit 1 ou 2");
                                                                                        goto ferreurenteremail;
                                                                                        break;
                                                                                    }
                                                                                }


                                                                                fnewreponsehobby :
                                                                                printf("\n\n\t\t\t Choisissez une question de s%ccurit%c :\n",130,130);
                                                                                printf("\n\t\t\t\t\t\033[34m  (a) Entrer vos loisirs favoris\033[0m\n");
                                                                                printf("\t\t\t\t\t\033[34m  (b) Entrer votre date de naissance\033[0m\n");
                                                                                printf("\t\t\t\t\t\033[34m  (c) Entrer le nom de votre grand-m%cre\033[0m\n",138);
                                                                                printfBlue("\n\t\t\t\t\tVeuillez entrer votre choix :  ");
                                                                                scanf(" %c", &fchoixquestion);
                                                                                switch (fchoixquestion) {
                                                                                                        case 'a':
                                                                                                                    printf("\n\t\t\t\tVotre r%cponse :  ",130);
                                                                                                                    scanf(" %[^\n]", f.fhobby);
                                                                                                                    f8 = check_file(fhobby_fichier, f.fhobby);
                                                                                                                    if (f8 == 1) {


                                                                                                                        fnewpass :
                                                                                                                        system("cls");
                                                                                                                        connexion();
                                                                                                                        printfGreen("\n\n\t\t\t\tVous pouvez modifier votre mot de passe ");
                                                                                                                        printf("\n\n\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffre et une lettre majuscule\n\033[0m",138);
                                                                                                                        printf("\n\n\n\t\t\t\tNouveau mot de passe : ");
                                                                                                                        int i = 0;
                                                                                                                        while (1) {
                                                                                                                            char ch = getch(); // Read a character without echoing it to the screen

                                                                                                                            if (ch == 13) { // ASCII value for Enter key
                                                                                                                                fnew_password[i] = '\0'; // Null-terminate the string
                                                                                                                                break;
                                                                                                                            } else if (ch == 8) { // ASCII value for Backspace key
                                                                                                                                if (i > 0) {
                                                                                                                                    printf("\b \b"); // Move the cursor back, overwrite the character with a space, move the cursor back again
                                                                                                                                    i--; // Move back one position in the string
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                // Check if the maximum length of the password is reached
                                                                                                                                if (i < TAILLE_MAX - 1) {
                                                                                                                                    fnew_password[i++] = ch; // Add the character to the password
                                                                                                                                    printf("*"); // Print an asterisk (*) to represent the character
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                        printf("\n");
                                                                                                                        f5 = ftestpassword(fnew_password);
                                                                                                                        if(f5 != 1)
                                                                                                                            goto fnewpass;
                                                                                                                        add_password(fpass_fichier, fnew_password);
                                                                                                                        printf("\n\n\t\t\t\t\033[34m votre mot de passe est modifi%c\n033[0m",310);
                                                                                                                        }
                                                                                                                        else {

                                                                                                                            printf("\n\t\t\t\t\033[34m  [1]. Choissisez une autre question\033[0m\n",130);
                                                                                                                            printf("\033[34m\n\t\t\t\t  [2]. Menu Inscription\Connexion\n\033[0m", 130);
                                                                                                                            printfBlue("\n\t\t\t\t\tVotre choix :  ");
                                                                                                                            scanf("%d", &fchoixh);
                                                                                                                            switch(fchoixh){
                                                                                                                                case 1 : goto fnewreponsehobby;
                                                                                                                                         break;
                                                                                                                                case 2 : goto fmenuclientfournisseurh;
                                                                                                                                        break;

                                                                                                                            }
                                                                                                                        }
                                                                                                                    break;

                                                                                                        case 'b':
                                                                                                                fnewresponseannee :
                                                                                                                printf("\n\t\t\t\tVotre r%cponse :  ",130);
                                                                                                                    scanf(" %[^\n]", f.fannee_naissance);
                                                                                                                    f9 = check_file(fannee_naissance_fichier, f.fannee_naissance);
                                                                                                                    if (f9 == 1) {


                                                                                                                        fnewpass1 :
                                                                                                                        system("cls");
                                                                                                                        connexion();
                                                                                                                        printfGreen("\n\n\t\t\t\tVous pouvez modifier votre mot de passe ");
                                                                                                                        printf("\n\n\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffre et une lettre majuscule\n\033[0m",138);
                                                                                                                        printf("\n\n\n\t\t\t\tNouveau mot de passe : ");
                                                                                                                        int i = 0;
                                                                                                                        while (1) {
                                                                                                                            char ch = getch(); // Read a character without echoing it to the screen

                                                                                                                            if (ch == 13) { // ASCII value for Enter key
                                                                                                                                fnew_password[i] = '\0'; // Null-terminate the string
                                                                                                                                break;
                                                                                                                            } else if (ch == 8) { // ASCII value for Backspace key
                                                                                                                                if (i > 0) {
                                                                                                                                    printf("\b \b"); // Move the cursor back, overwrite the character with a space, move the cursor back again
                                                                                                                                    i--; // Move back one position in the string
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                // Check if the maximum length of the password is reached
                                                                                                                                if (i < TAILLE_MAX - 1) {
                                                                                                                                    fnew_password[i++] = ch; // Add the character to the password
                                                                                                                                    printf("*"); // Print an asterisk (*) to represent the character
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                        printf("\n");
                                                                                                                        f5 = ftestpassword(fnew_password);
                                                                                                                        if(f5 != 1)
                                                                                                                            goto fnewpass1;
                                                                                                                        fadd_password(fpass_fichier, fnew_password);
                                                                                                                        printf("\n\n\t\t\t\t\033[34m votre mot de passe est modifi%c\n033[0m",310);

                                                                                                                        }
                                                                                                                        else {

                                                                                                                            printf("\n\t\t\t\t\033[34m  [1]. Choissisez une autre question\033[0m\n",130);
                                                                                                                            printf("\033[34m\n\t\t\t\t  [2]. Menu Inscription\Connexion\n\033[0m", 130);
                                                                                                                            printfBlue("\n\t\t\t\t\tVotre choix :  ");
                                                                                                                            scanf("%d", &fchoixa);
                                                                                                                            switch(fchoixa){
                                                                                                                                case 1 : goto fnewresponseannee;
                                                                                                                                         break;
                                                                                                                                case 2 : goto fmenuclientfournisseurh;
                                                                                                                                        break;

                                                                                                                            }
                                                                                                                        }
                                                                                                                break;
                                                                                                        case 'c':
                                                                                                                fnewresponsgrandmere :
                                                                                                                printf("\n\t\t\t\tVotre r%cponse :  ",130);
                                                                                                                    scanf(" %[^\n]", f.fgrandmere_name);
                                                                                                                    f10 = check_file(fgrandmere_fichier, f.fgrandmere_name);
                                                                                                                    if (f10 == 1) {


                                                                                                                        fnewpass2 :
                                                                                                                        system("cls");
                                                                                                                        connexion();
                                                                                                                        printfGreen("\n\n\t\t\t\tVous pouvez modifier votre mot de passe ");
                                                                                                                        printf("\n\n\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffre et une lettre majuscule\n\033[0m",138);
                                                                                                                        printf("\n\n\n\t\t\t\tNouveau mot de passe : ");
                                                                                                                        int i = 0;
                                                                                                                        while (1) {
                                                                                                                            char ch = getch(); // Read a character without echoing it to the screen

                                                                                                                            if (ch == 13) { // ASCII value for Enter key
                                                                                                                                fnew_password[i] = '\0'; // Null-terminate the string
                                                                                                                                break;
                                                                                                                            } else if (ch == 8) { // ASCII value for Backspace key
                                                                                                                                if (i > 0) {
                                                                                                                                    printf("\b \b"); // Move the cursor back, overwrite the character with a space, move the cursor back again
                                                                                                                                    i--; // Move back one position in the string
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                // Check if the maximum length of the password is reached
                                                                                                                                if (i < TAILLE_MAX - 1) {
                                                                                                                                    fnew_password[i++] = ch; // Add the character to the password
                                                                                                                                    printf("*"); // Print an asterisk (*) to represent the character
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                        printf("\n");
                                                                                                                        f5 = ftestpassword(fnew_password);
                                                                                                                        if(c5 != 1)
                                                                                                                            goto fnewpass2;
                                                                                                                        fadd_password(fpass_fichier, fnew_password);
                                                                                                                        printfGreen("\n\n\t\t\t\tvotre mot de passe est modifie");

                                                                                                                        }
                                                                                                                        else {

                                                                                                                            printf("\n\t\t\t\t\033[34m  [1]. Choissisez une autre question\033[0m\n",130);
                                                                                                                            printf("\033[34m\n\t\t\t\t  [2]. Menu Inscription\Connexion\n\033[0m", 130);
                                                                                                                            printfBlue("\n\t\t\t\t\tVotre choix :  ");
                                                                                                                            scanf("%d", &fchoixg);
                                                                                                                            switch(fchoixg){
                                                                                                                                case 1 : goto fnewresponsgrandmere;
                                                                                                                                         break;
                                                                                                                                case 2 : goto fmenuclientfournisseurh;
                                                                                                                                        break;

                                                                                                                            }
                                                                                                                        }
                                                                                                                break;
                                                                                                    }
                                                        }

                                    break;
                                                    }
                                                    FILE *fichier_f_email_connexion = fopen(f.fmail, "a+");
                                    if (fichier_f_email_connexion == NULL) {
                                        printf("Erreur lors de l'ouverture du fichier d'email\n");
                                        return 1;
                                    }

                                    char mot[100];
                                    while (fgets(mot, sizeof(mot), fichier_f_email_connexion) != NULL) {
                                        strcpy(fournis_nom, mot);

                                    }

                                    fclose(fichier_f_email_connexion);


                                    do {
                                        printf("1 - boite de message, 2 - envoyez un produit\n");
                                        scanf("%d", &fournisseur_choisie);
                                        switch (fournisseur_choisie) {
                                            case 1:
                                                boite_de_message_fournisseur(fournis_nom);
                                                break;
                                            case 2:
                                                confirmation(fournis_nom);
                                                break;
                                            default:
                                                printf("Erreur : choix invalide\n");
                                                break;
                                        }
                                    } while (fournisseur_choisie != 1 && fournisseur_choisie != 2);
                                                    break;


                                    case 1: //inscription du fournisseur
                                            finscrireanouveau :
                                            fnouveau_question :
                                            system("cls");
                                            inscription();
                                            printf("\n\n\n\t\t\t   Nom       :         ");
                                            scanf(" %[^\n]", f.fnom);
                                            f3 = ftestname(f.fnom);
                                                fnom :
                                            if(f3 != 1){

                                            system("cls");
                                            inscription();
                                            printf("\033[1;31m\n\t\t\t\tErreur :*Nom contient des chiffres ou des symboles\n\033[0m");
                                            printf("\n\t\t\t   Nom       :         ");
                                            scanf(" %[^\n]", f.fnom);
                                            f3 = ftestname(f.fnom);
                                                if(f3 != 1){
                                                    goto fnom;
                                                }

                                            }

                                            printf("\n");
                                            f3 = -1;

                                                printf("\n\n\t\t\t   Pr%cnom    :         ", 130);
                                                scanf(" %[^\n]", f.fpnom);
                                                f3 = ftestname(f.fpnom);
                                                fprenom :
                                                if(f3 != 1){
                                                    system("cls");
                                                    inscription();
                                                    printf("\n\n\n\t\t\t   Nom       :         %s",f.fnom);
                                                    printf("\033[1;31m\n\n\t\t\tErreur :*Pr%cnom contient des chiffres ou des symboles\n\033[0m", 130);
                                                    printf("\n\t\t\t   Pr%cnom    :         ", 130);
                                                    scanf(" %[^\n]", f.fpnom);
                                                    f3 = ftestname(f.fpnom);
                                                    if(f3 != 1)
                                                        goto fprenom;
                                                    }

                                            printf("\n");
                                            do {
                                                printf("\n\n\t\t\t   Adresse   :         ");
                                                scanf(" %[^\n]", f.fadresse);
                                            } while (strlen(f.fadresse) == 0);

                                                printf("\n\n\n\t\t\t   E-mail    :         ");
                                                scanf(" %[^\n]", f.fmail);
                                                f2 = ftestmail(f.fmail);
                                                femail :
                                                if(f2 != 1){
                                                    system("cls");
                                                    inscription();
                                                    printf("\n\n\n\t\t\t   Nom       :         %s",c.nom);
                                                    printf("\n\n\n\n\t\t\t   Pr%cnom    :         %s", 130,c.pnom);
                                                    printf("\n\n\n\n\t\t\t   Adresse   :         %s",c.adresse);
                                                    printf("\n\n\t\t\t\033[1;31m*Erreur :L'adresse email est invalide. Assurez-vous d'inclure le symbole '@' dans votre adresse email.\n\033[0m");
                                                    printf("\n\t\t\t   E-mail    :         ");
                                                    scanf(" %[^\n]", f.fmail);
                                                    f2 = ftestmail(f.fmail);
                                                    if(f2 != 1)
                                                        goto femail;
                                                }

                                                    printf("\n\n\n\t\t\t   T%cl       :         ",130);
                                                    scanf(" %[^\n]", f.fn_tel);
                                                    f4 = ftestphone(f.fn_tel);
                                                    fmail :
                                                    if(f4 != 1){
                                                        system("cls");
                                                        inscription();
                                                        printf("\n\n\n\t\t\t   Nom       :         %s",f.fnom);
                                                        printf("\n\n\n\n\t\t\t   Pr%cnom    :         %s", 130,f.fpnom);
                                                        printf("\n\n\n\n\t\t\t   Adresse   :         %s",f.fadresse);
                                                        printf("\n\n\n\n\t\t\t   E-mail    :         %s",f.fmail);
                                                        printf("\n\n\t\t\t\033[1;31m*Erreur :Le num%cro de t%cl%cphone est invalide. Assurez-vous qu'il commence par '+'.\n\033[0m",130,130,130);
                                                        printf("\n\n\t\t\t   T%cl       :         ",130);
                                                        scanf(" %[^\n]", f.fn_tel);
                                                        f4 = ftestphone(f.fn_tel);
                                                        if(f4 != 1)
                                                            goto fmail;

                                                    }
                                                        printf("\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffr eet une lettre majuscule\n\033[0m",138);
                                                        printf("\n\t\t\t  Mot de passe :          ");
                                                        int k = 0;
                                                        while (1) {
                                                            char ch = getch();
                                                            if (ch == 13) {
                                                                f.fm_pass[k] = '\0';
                                                                break;
                                                            } else if (ch == 8) {
                                                                if (k > 0) {
                                                                printf("\b \b");
                                                                k--;
                                                            }
                                                            } else {
                                                                f.fm_pass[k++] = ch;
                                                                printf("*");
                                                            }
                                                        }
                                                        f.fm_pass[k] = '\0';
                                                        printf("\n");
                                                        f5 = ftestpassword(f.fm_pass);

                                                        if(f5 != 1){
                                                            fmot_pass :
                                                            fchanger_motpasse :
                                                            system("cls");
                                                            inscription();
                                                            printf("\n\n\n\t\t\t   Nom       :         %s",f.fnom);
                                                            printf("\n\n\n\n\t\t\t   Pr%cnom    :         %s", 130,f.fpnom);
                                                            printf("\n\n\n\n\t\t\t   Adresse   :         %s",f.fadresse);
                                                            printf("\n\n\n\n\t\t\t   E-mail    :         %s",f.fmail);
                                                            printf("\n\n\n\n\t\t\t   T%cl       :         %s",130,f.fn_tel);
                                                            printf("\n\t\t\t\033[1;31m*NB :Minimum 10 caract%cres avec au moins un chiffr eet une lettre majuscule\n\033[0m",138);
                                                            printf("\n\t\t\t  Mot de passe :          ");

                                                        int j = 0;
                                                        while (1) {
                                                            char ch = getch();
                                                            if (ch == 13) {
                                                                f.fm_pass[j] = '\0';
                                                                break;
                                                            } else if (ch == 8) {
                                                                if (j > 0) {
                                                                printf("\b \b");
                                                                j--;
                                                            }
                                                            } else {
                                                                f.fm_pass[j++] = ch;
                                                                printf("*");
                                                            }
                                                        }
                                                        f.fm_pass[j] = '\0';
                                                        printf("\n");
                                                        f5 = ftestpassword(f.fm_pass);

                                                        }
                                                        if(f5 != 1)
                                                            goto fmot_pass;

                                                        fverification :
                                                        fnouveauverification:
                                                        printf("\n\t\t\t  V%crification :          ", 130);
                                                        int z = 0;
                                                        while (1) {
                                                            char ch = getch();
                                                            if (ch == 13) {
                                                                fm_pass1[z] = '\0';
                                                                break;
                                                                } else if (ch == 8) {
                                                                if (z > 0) {
                                                                    printf("\b \b");
                                                                    z--;
                                                                }
                                                                } else {
                                                                    fm_pass1[z++] = ch;
                                                                    printf("*");
                                                                }
                                                        }
                                                        fm_pass1[z] = '\0';
                                                        printf("\n");
                                                    if (strcmp(f.fm_pass, fm_pass1) != 0){
                                                        printfRed("\n\t\t\tmot de passe incorrect");

                                                        printf("\n\t\t\t\t\t\t\033[34m [1]. Rentrez Mot de passe :\033[0m\n");
                                                        printf("\033[34m\n\t\t\t\t\t\t  [2]. changer le Mot de passe \n\033[0m");
                                                        printfBlue("\n\t\t\t\t\t\t\tVotre choix :  ");
                                                        scanf("%d",&fchoixverfication);
                                                        switch (fchoixverfication){
                                                            case 1:
                                                                 goto fnouveauverification;//client veut rentrer la verification
                                                                 break;
                                                            case 2:
                                                                goto fchanger_motpasse;
                                                        }
                                                    }
                                                    printf("\n\t\t\t\t\t\033[1;32mLe code est valide.\n\033[0m");


                                                   printf("\n\t\t\tChoisissez une question de s%ccurit%c :\n",130,130);
                                                   printf("\t\t\t\t(a) Entrer vos loisirs favoris\n");
                                                   printf("\t\t\t\t(b) Entrer votre date de naissance\n");
                                                   printf("\t\t\t\t(c) Entrer le nom de votre grand-m%cre\n",138);
                                                   printf("\n\t\t\tVeuillez entrer votre choix :  ");
                                                   scanf(" %c",&fchoixquestion2);
                                                    switch (fchoixquestion2){
                                                                            case 'a':
                                                                                    printf("\n\t\t\t\tvotre r%cponse :  ",130);
                                                                                    scanf(" %[^\n]", f.fhobby);
                                                                                    fprintf(fhobby_fichier, "%s\n", f.fhobby);
                                                                                    break;
                                                                            case 'b':
                                                                                    printf("\n\t\t\t\tvotre r%cponse :  ",130);
                                                                                    scanf(" %[^\n]", f.fannee_naissance);
                                                                                    fprintf(fannee_naissance_fichier, "%s\n", f.fannee_naissance);
                                                                                    break;
                                                                            case 'c':
                                                                                    printf("\n\t\t\t\tvotre r%cponse :  ",130);
                                                                                    scanf(" %[^\n]", f.fgrandmere_name);
                                                                                    fprintf(fgrandmere_fichier, "%s\n", f.fgrandmere_name);
                                                                                    break;
                                                    }

                                                    char ch1;
                                                printf("\n\t\t\t\tS'il vous plait verifier que les donnees entrees sont jutes");
                                                printfBlue("\n\t\t\t\tvous etes sure OUI(O)/AUTRE BUTTON :  ");
                                                scanf(" %c",&ch1);

                                                if (ch1 == 'o'||ch1 =='O'){
                                                    fprintf(fnom_fichier, "%s\n", f.fnom);
                                                    fprintf(fpnom_fichier, "%s\n", f.fpnom);
                                                    fprintf(fadresse_fichier, "%s\n", f.fadresse);
                                                    fprintf(fmail_fichier, "%s\n", f.fmail);
                                                    fprintf(ftel_fichier, "%s\n", f.fn_tel);
                                                    fprintf(fpass_fichier, "%s\n", f.fm_pass);

                                                    fclose(fnom_fichier);
                                                    fclose(fpnom_fichier);
                                                    fclose(fadresse_fichier);
                                                    fclose(fmail_fichier);
                                                    fclose(fpass_fichier);
                                                    fclose(ftel_fichier);
                                                    FILE *fichier_f_email = fopen(f.fmail, "a+");
                                                    if (fichier_f_email == NULL) {
                                                        printf("Erreur lors de l'ouverture du fichier d'email\n");
                                                        return 1;
                                                    }
                                                    fprintf(fichier_f_email, "%s %s", f.fpnom,f.fnom);
                                                    fclose(fichier_f_email);


                                                    printf("\n\n\t\t\t\t\t\033[1;32mInscription faite avec succ%cs \2\n\033[0m",130);
                                                    system("cls");

                                                    VisitAfrica();
                                                    artisanat();

                                    //Menu informations des produits :*
                                     // Demander le nom du pays
                                                      printf("\n");
                                                      printf("\033[1;33m");
                                                      printf("\t\t\t\t==== Choisissez votre pays ===\n");
                                                      printf("\033[1;37m");
                                                      printf("                            1- Maroc\n");
                                                      printf("                            2- Togo\n");
                                                      printf("                            3- Mali\n");
                                                      printf("\033[1;33m");
                                                      printf("\n");
                                                      printf("\t\t\t\t===> Votre choix : ");
                                                      printf("\n\t\t\t\t");
                                                      scanf("%d", &n);
                                                      printf("\n");

                                                      switch (n) {
                                                        case 1:
                                                          printf("\033[1;36m");
                                                          printf("                   >> votre choix est maroc <<\n");
                                                          printf("\n");
                                                          strcpy(pay,"MAROC");
                                                          break;
                                                        case 2:
                                                          printf("\033[1;36m");
                                                          printf("                   >> votre choix est togo <<\n");
                                                          printf("\n");
                                                          strcpy(pay,"TOGO");
                                                         break;
                                                        case 3:
                                                          printf("\033[1;36m");
                                                          printf("                   >> votre choix est mali << \n");
                                                          printf("\n");
                                                          strcpy(pay,"MALI");
                                                          break;
                                                        default:
                                                          printf("\033[1;31m");
                                                          printf("Choix invalide.\n");
                                                      }

                                                      printf("\n");

                                                      // Demander le type d'artisanat
                                                      printf("\033[1;33m");
                                                      printf("          Type d'artisanat :  ");
                                                      printf("\033[1;37m");
                                                      scanf(" %[^\n]", typeArtisanat);
                                                      printf("\n");


                                                      // Ouvrir les fichiers pour stocker les données
                                                      FILE *payss = fopen(pay, "a+");
                                                      FILE *artisanat = fopen(typeArtisanat, "a+");

                                                      // Ecrire les données des artisanats dans le fichier
                                                      fprintf(payss, "%s\n", typeArtisanat);


                                                      // Ecrire les données des artisanats dans le fichier (description)
                                                        printf("\033[1;33m");
                                                        printf("          Description :  " );
                                                        printf("\033[1;37m");
                                                        scanf(" %[^\n]",descreption); // Accéder au membre description de chaque élément de l'array
                                                        printf("\n");
                                                      fprintf(artisanat, "%s %s :%s\n", f.fpnom,f.fnom,descreption);

                                                      // Fermer les fichiers
                                                      fclose(payss);
                                                      fclose(artisanat);

                                                    printf("\n\n\t\t\t\t\t\033[1;32mInscription faite avec succ%cs \2\n\033[0m",130);
                                                    goto newconnection_after_inscription1;
                                                }
                                                     else{

                                                    goto fnouveau_question;
                                                }







                                                                break;

                                    case 3 : //quitter au menu client/fournisseur
                                            goto menuclient_fournisseur;
                                            break;




                            break;

                 }
                 break;
                    case 3 ://quitte au menu principal
                            system("cls");
                            goto saisie_choix2;
                            break;
                    default :
                            printf("choix invalid");
                            break;
                 }
                 break;

            case '2': //A propos de la platforme
                  system("cls");
                 VisitAfrica();
                  displayAboutPlatform();
                  char chr;
                  printfYellow("\t\tclick q pour revenir au menu principal   :   ");
                  scanf(" %c",&chr);
                  if(chr == 'q' || chr == 'Q')
                    goto menuprincipal2;

                break;
            case '3':
                 system("cls");
                 VisitAfrica();
                 aideetsupport();
                 char chr1;
                  printfYellow("\t\tclick q pour revenir au menu principal   :   ");
                  scanf(" %c",&chr1);
                  if(chr1 == 'q' || chr1 == 'Q')
                    goto menuprincipal2;
                break;
            case '4':
                system("cls");
                 VisitAfrica();
                conditionutilisation();
                char chr2;
                  printfYellow("\t\tclick q pour revenir au menu principal   :   ");
                  scanf(" %c",&chr2);
                  if(chr2 == 'q' || chr2 == 'Q')
                    goto menuprincipal2;
                break;
            case '5':
                printf("\033[1;4;32m\\t\t\tVotre pr%csence a %ct%c un vrai rayon de soleil sur notre plateforme. En partant, gardez toujours en t%cte votre potentiel lumineux. Bonne continuation et que chaque %ctape de votre parcours soit brillante!\n\033[0m",130,130,130,130,130);
                break;
            default :
                    printf("\033[1;4;31m\t\t\t\t\t-->Une s%clection invalide a %ct%c d%ctect%ce.\n\n", 130, 130, 130, 130, 130);
                    printf("\033[0m");
                    printf("\033[1;4;32m\t\t\t\t\t-->Recommandation : Entrer un choix entre 1 et 5\n\n");
                    printf("\033[0m");
                    goto saisie_choix;
    }
    return 0;
}

void printfRed(char *string) {
    printf("\033[1;31m%s\033[0m", string);
}

void printfGreen(char *string) {
    printf("\033[1;32m%s\033[0m", string);
}

void printfBlue(char *string) {
    printf("\033[1;34m%s\033[0m", string);
}

void printfMagenta(char *string) {
    printf("\033[1;35m%s\033[0m", string);
}

void printfCyan(char *string) {
    printf("\033[1;36m%s\033[0m", string);
}

void printfYellow(char *string) {
    printf("\033[1;33m%s\033[0m", string);
}

// Définition de la fonction VisitAfrica
void VisitAfrica(){
    printfYellow("\t\t\t\t\t\t-----------------------------\n\t\t\t\t\t\t\xB3");
    printfRed("\t V");
    printfGreen("i");
    printfBlue("s");
    printfGreen("i");
    printfYellow("t ");
    printfBlue("A");
    printfMagenta("f");
    printfRed("r");
    printfCyan("i");
    printfGreen("c");
    printfMagenta("a");
    printfYellow("\t    \xB3");
    printfYellow("\n\t\t\t\t\t\t-----------------------------");
}
// Fonction pour afficher le menu principal centré
void afficherMenuPrincipal() {
    VisitAfrica();
    printf("\n\n\n\t\t\t\t  D%ccouvrez un march%c extraordinaire avec Visit Africa o%c  :",130,130,151);
    printf("\n\t\t\t\t\t*Chaque produit raconte une histoire\n\t\t\t\t\t*Chaque artisan partage son h%critage",130);
    printf("\n\t\t\t\t\t*Chaque clic vous transporte au coeur de l'Afrique\n\n\n");

    printfYellow("\t\t\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printfYellow("\t\t\t\t\t\xBA");
    printfGreen("    [1].  Entrer au Programme");
    printfYellow("\t\t \xBA\n");
    printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
    printf("    [2]. A Propos de la Plateforme");
    printfYellow("\t \xBA\n");
    printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
    printf("    [3]. Aide et Support");
    printfYellow("\t\t \xBA\n");
    printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
    printf("    [4]. Conditions d'Utilisation");
    printfYellow("\t \xBA\n");
    printfYellow("\t\t\t\t\t\xBA");
    printf("\tet Politique de Confidentialit%c",130);
    printfYellow("  \xBA\n");
    printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
    printfRed("    [5]. Quitter");
    printfYellow("\t\t\t \xBA\n");
    printfYellow("\t\t\t\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
}

void afficherMenuClientFournisseur() {
    printf("\n\n   \t\t\tD%ccouvrez l'%cme de l'Afrique %c travers ses artisans talentueux et ses produits uniques. ",130,131,133);
    printf("\n      \t\t\tRejoignez-nous en tant que \033[1;33mclient\033[0m ou \033[1;33martisan\033[0m et participez %c cette aventure inspirante.\n",133);
    printf("\033[0m");
    printfYellow("\n\n\n\t\t\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
    printfGreen("         [1].  Compte Client");
    printfYellow("\t\t \xBA\n");
    printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
    printfGreen("         [2].  Compte Artisan");
    printfYellow(" \t\t \xBA\n");
    printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
    printfRed("         [3].  Quitter");
    printfYellow(" \t\t \xBA\n");
    printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t");
    printfYellow("\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

}

void afficherChoix1(){
    printfYellow("\n\t\t\t\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printfYellow("\t\t\t\t\t\t\xBA       votre choix        \xBA\n");
    printfYellow("\t\t\t\t\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
    printfYellow("\n\t\t\t\t\t\t\t===>   ");
}

void afficherChoix2(){
    printfYellow("\n      \t\t\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\033[1;33m");
    printf("      \t\t\t\t\t\xBA   S%clectionner le type du Compte :  \xBA\n",130);
    printf("\033[0m");
    printfYellow("     \t\t\t\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
    printfYellow("\n     \t\t\t\t\t\t\t===>   ");
}

int testmail(char *input) {
    int i, ok = 0;

    for (i = 0; i < strlen(input) && strlen(input) >= 5 && input[0] != '@'; i++) {
        if (input[i] == '@') {
            ok = 1;
            break;
        }
    }
    return ok;
}

int testname(char *input) {
    for (size_t i = 0; input[i] != '\0'; ++i) {
        char c = input[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ' || c == '-')) {
            return 0;
        }
    }
    return 1;
}

int testphone(char *input) {
    size_t len = strlen(input);
    if (len != 13) {
        return 0;
    }

    char firstChar = input[0];
    switch (firstChar) {
        case '+':
            for (size_t i = 1; i < len; ++i) {
                char c = input[i];
                if (!(c >= '0' && c <= '9')) {
                    return 0;
                }
            }
            break;
        case '0':
            for (size_t i = 1; i < len; ++i) {
                char c = input[i];
                if (!(c >= '0' && c <= '9')) {
                    return 0;
                }
            }
            break;
        default:
            return 0;
    }

    return 1;
}

int testpassword(char *input) {
    int i, minusc = 0, majusc = 0, chiff = 0, ok = 0;
    for (i = 0; i < strlen(input); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            minusc++;
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            majusc++;
        } else if (input[i] >= '0' && input[i] <= '9') {
            chiff++;
        }
    }
    if (strlen(input) >= 10 && minusc > 0 && majusc > 0 && chiff > 0) {
        ok = 1;
    }
    return ok;
}

int check_pass(FILE *fic, char word[TAILLE_MAX]) {
    char read[TAILLE_MAX];
    int ok = 0;

    while (fscanf(fic, " %[^\n]", read) != EOF) {
        if (strcmp(word, read) == 0) {
            ok = 1;
            break;
        }
    }
    rewind(fic);
    return ok;
}

int check_email(FILE *fic, char email[TAILLE_MAX]) {
    char read[TAILLE_MAX];
    int ok = 0;

    while (fscanf(fic, " %[^\n]", read) != EOF) {
        if (strcmp(email, read) == 0) {
            ok = 1;
            break;
        }
    }
    rewind(fic);
    return ok;
}

int check_hobby(FILE *hobby_fic, char hobby[TAILLE_MAX]) {
    char read[TAILLE_MAX];
    int ok = 0;

    while (fscanf(hobby_fic, " %[^\n]", read) != EOF) {
        if (strcmp(hobby, read) == 0) {
            ok = 1;
            break;
        }
    }
    rewind(hobby_fic);
    return ok;
}

int check_date_naissance(FILE *dob_fic, char dob[TAILLE_MAX]) {
    char read[TAILLE_MAX];
    int ok = 0;

    while (fscanf(dob_fic, " %[^\n]", read) != EOF) {
        if (strcmp(dob, read) == 0) {
            ok = 1;
            break;
        }
    }
    rewind(dob_fic);
    return ok;
}

int check_name_grandmere(FILE *grand_mere_fic, char grand_mere[TAILLE_MAX]) {
    char read[TAILLE_MAX];
    int ok = 0;

    while (fscanf(grand_mere_fic, " %[^\n]", read) != EOF) {
        if (strcmp(grand_mere, read) == 0) {
            ok = 1;
            break;
        }
    }
    rewind(grand_mere_fic);
    return ok;
}

int replace_file_content(const char *original_file, const char *temp_file) {
    FILE *original = fopen(original_file, "w");
    FILE *temp = fopen(temp_file, "r");

    if (original == NULL || temp == NULL) {
        return 0;
    }

    char c;
    while ((c = fgetc(temp)) != EOF) {
        fputc(c, original);
    }

    fclose(original);
    fclose(temp);

    remove(temp_file);

    return 1;
}

void add_password(FILE *pass_fic, const char *new_password) {
    // Move the file pointer to the end of the file
    fseek(pass_fic, 0, SEEK_END);

    // Append the new password to the file
    fprintf(pass_fic, "%s\n", new_password);
}

void afficherMenuConnexion_inscription(){
printfYellow("\n\n\n\t\t\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
printfGreen("    [1].  Inscription");
printfYellow("\t\t\t \xBA\n");
printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
printfGreen("    [2].  Connexion");
printfYellow("\t\t\t \xBA\n");
printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t\t\xBA");
printfRed("    [3].  Quitter");
printfYellow("\t\t\t \xBA\n");
printfYellow("\t\t\t\t\t\xBA\t\t\t\t\t \xBA\n\t\t\t\t");
printfYellow("\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
}

void afficherChoix3(){
    printfYellow("\n\t\t\t\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printfYellow("\t\t\t\t\t\t\xBA      Votre choix :       \xBA\n");
    printfYellow("\t\t\t\t\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
    printfYellow("\n\t\t\t\t\t\t\t===>   ");

}

void inscription(){
printfGreen("\t\t\t\t\t\t-----------------------------\n\t\t\t\t\t\t\xB3");
printfGreen("\t INSCRIPTION        \xB3\n");
printfGreen("\t\t\t\t\t\t-----------------------------");
printfGreen("\n\n\t\t--------------o---------------o---------------o---------------o----------------o---------------o");
}

void artisanat(){
printfMagenta("\n\t\t\t\t\t\t-----------------------------\n\t\t\t\t\t\t\xB3");
printfMagenta("\t ARTISANAT       \xB3\n");
printfMagenta("\t\t\t\t\t\t\t-----------------------------");

}

int ftestmail(char *input) {
 int i, ok = 0;
 for (i = 0; i < strlen(input) && strlen(input) >= 5 && input[0] != '@'; i++) {
 if (input[i] == '@') {
 ok = 1;
 break;
 }
 }
 return ok;
}

int ftestname(char *input) {
 for (size_t i = 0; input[i] != '\0'; ++i) {
 char c = input[i];
 if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ' || c == '-')) {
 return 0;
 }
 }
 return 1;
}

int ftestphone(char *input) {
 size_t len = strlen(input);
 if (len != 13) {
 return 0;
 }
 char ffirstChar = input[0];
 switch (ffirstChar) {
 case '+':
 for (size_t i = 1; i < len; ++i) {
 char c = input[i];
 if (!(c >= '0' && c <= '9')) {
 return 0;
 }
 }
 break;
 case '0':
 for (size_t i = 1; i < len; ++i) {
 char c = input[i];
 if (!(c >= '0' && c <= '9')) {
 return 0;
 }
 }
 break;
 default:
 return 0;
 }
 return 1;
}

int ftestpassword(char *input) {
 int i, minusc = 0, majusc = 0, chiff = 0, ok = 0;
 for (i = 0; i < strlen(input); i++) {
 if (input[i] >= 'a' && input[i] <= 'z') {
 minusc++;
 } else if (input[i] >= 'A' && input[i] <= 'Z') {
 majusc++;
 } else if (input[i] >= '0' && input[i] <= '9') {
 chiff++;
 }
 }
 if (strlen(input) >= 10 && minusc > 0 && majusc > 0 && chiff > 0) {
 ok = 1;
 }
 return ok;
}

int fcheck_pass(FILE *fic, char word[TAILLE_MAX]) {
 char read[TAILLE_MAX];
 int ok = 0;
 while (fscanf(fic, " %[^\n]", read) != EOF) {
 if (strcmp(word, read) == 0) {
 ok = 1;
 break;
 }
 }
 rewind(fic);
 return ok;
}

int fcheck_email(FILE *fic, char email[TAILLE_MAX]) {
 char read[TAILLE_MAX];
 int ok = 0;
 while (fscanf(fic, " %[^\n]", read) != EOF) {
 if (strcmp(email, read) == 0) {
 ok = 1;
 break;
 }
 }
 rewind(fic);
 return ok;
}

int check_file(FILE *file_fic, char chaine[TAILLE_MAX]) {
 char read[TAILLE_MAX];
 int ok = 0;
 while (fscanf(file_fic, " %[^\n]", read) != EOF) {
 if (strcmp(chaine, read) == 0) {
 ok = 1;
 break;
 }
 }
 rewind(file_fic);
 return ok;
}

int fcheck_date_naissance(FILE *dob_fic, char dob[TAILLE_MAX]) {
 char read[TAILLE_MAX];
 int ok = 0;
 while (fscanf(dob_fic, " %[^\n]", read) != EOF) {
 if (strcmp(dob, read) == 0) {
 ok = 1;
 break;
 }
 }
 rewind(dob_fic);
 return ok;
}

int fcheck_name_grandmere(FILE *grand_mere_fic, char grand_mere[TAILLE_MAX]) {
 char read[TAILLE_MAX];
 int ok = 0;
 while (fscanf(grand_mere_fic, " %[^\n]", read) != EOF) {
 if (strcmp(grand_mere, read) == 0) {
 ok = 1;
 break;
 }
 }
 rewind(grand_mere_fic);
 return ok;
}

int freplace_file_content(const char *original_file, const char *temp_file) {
 FILE *original = fopen(original_file, "w");
 FILE *temp = fopen(temp_file, "r");
 if (original == NULL || temp == NULL) {
 return 0;
 }
 char c;
 while ((c = fgetc(temp)) != EOF) {
 fputc(c, original);
 }
 fclose(original);
 fclose(temp);
 remove(temp_file);
 return 1;
}

void fadd_password(FILE *pass_fic, const char *new_password) {
 // Move the file pointer to the end of the file
 fseek(pass_fic, 0, SEEK_END);
 // Append the new password to the file
 fprintf(pass_fic, "%s\n", new_password);
}

void connexion(){
printfGreen("\t\t\t\t\t\t-----------------------------\n\t\t\t\t\t\t\xB3");
printfGreen("\t Connexion          \xB3\n");
printfGreen("\t\t\t\t\t\t-----------------------------");
printfGreen("\n\n\t\t--------------o---------------o---------------o---------------o----------------o---------------o");
}

void displayAboutPlatform() {
  printf("\033[1;33m");
  printf("\n");
  printf("                                                     ===================================\n");
  printf("                                                     >>>  A propos de la plateforme  <<<\n");
  printf("                                                     ===================================\n\n");
  printf("\033[1;37m");
  printf("         Bienvenue sur notre plateforme de vente et d'achat d'artisanats !\n");
  printf("         Notre mission est de promouvoir et de valoriser le savoir-faire artisanal en offrant une plateforme accessible aux artisans et aux amateurs d'artisanat.\n\n");
  printf("\033[1;33m");
  printf("                                                      =================================\n");
  printf("                                                      >>>  Pourquoi nous choisir ?  <<<\n");
  printf("                                                      =================================\n\n");
  printf("\033[1;33m");
  printf("      - Large s%clection d'artisanats :",130);
  printf("\033[1;37m");
  printf(" D%ccouvrez une large variete d'artisanats uniques fabriqu%cs par des artisans talentueux du monde entier.\n\n",130,130);
  printf("\033[1;33m");
  printf("      - Qualit%c garantie : ",130);
  printf("\033[1;37m");
  printf("Nous nous engageons %c proposer des produits d'artisanat de qualit%c sup%crieure, fabriqu%cs avec des mat%criaux et des techniques authentiques.\n\n",133,130,130,130,130);
  printf("\033[1;33m");
  printf("      - Soutien aux artisans : ");
  printf("\033[1;37m");
  printf("En achetant sur notre plateforme, vous soutenez directement les artisans et contribuez %c la pr%cservation de leur savoir-faire.\n\n",133,130);
  printf("\033[1;33m");
  printf("      - Exp%crience d'achat s%ccuris%ce : ",130,130,130);
  printf("\033[1;37m");
  printf("Profitez d'un processus d'achat s%ccuri%ce et transparent avec des options de paiement fiables.\n\n",130,130);
  printf("\033[1;33m");
  printf("      - Service client exceptionnel : ");
  printf("\033[1;37m");
  printf("Notre %cquipe est disponible pour r%cpondre %c vos questions et vous accompagner tout au long de votre experience d'achat.\n\n",130,130,133);
  printf("        *Rejoignez notre communaut%c d'artisans et d'amateurs d'artisanat !*\n\n",130);
  printf("      Cr%cez un compte d%cs aujourd'hui pour commencer %c explorer, acheter et partager votre passion pour l'artisanat.\n",130,138,133);
}

void aideetsupport(){
     printf("       \33[33m         ");
     printf("\n\n");

    printf("                ==========================================================================================\n");
    printf("                 >>>Bienvenue sur la page d'aide et de support de notre boutique d'artisanat africaine!<<<\n");
    printf("                ==========================================================================================\n\n");
    printf( "       \33[37m         ");
    printf("Nous sommes heureux de vous aider %c trouver les informations dont vous avez besoin \n                et %c r%csoudre tout probl%cme que vous pourriez rencontrer.\n\n",133,133,130,138);
     printf("       \33[33m         ");
    printf("Q: Comment passer une commande ?\n");
    printf("       \33[37m         ");
    printf("A: Pour passer une commande, suivez ces etapes simples :\n");
    printf("                 1. Creez un compte ou connectez-vous %c votre compte existant.\n",133);
    printf("                 2. Parcourez notre boutique en ligne et choisissez les articles que vous aimez.\n");
    printf("                 3. Vous pouvez contacter l'artisan du produit que vous voulez acheter pour savoir plus \n                    d'informations sur le produit, n%cgocier le prix et d%csigner la quantit%c .\n ",133,133,133);
    printf("                4. Saisissez vos informations de livraison et de paiement.\n");
    printf("                 5. Cliquez sur le bouton 'Confirmer la commande' pour finaliser votre achat.\n\n");
    printf("       \33[33m         ");
    printf("Q: Quels sont les modes de paiement disponibles ?\n");
    printf("       \33[37m         ");
    printf("A: Nous acceptons les modes de paiement suivants :\n");
    printf("                 -paimant a la livraison\n");
    printf("                 - Virement bancaire\n\n");
     printf("       \33[33m         ");
    printf("Q: Quels sont les delais de livraison ?\n");

     printf("       \33[37m         ");
    printf("A: Les delais de livraison varient en fonction de votre pays de destination. En moyenne, \n                   les commandes sont livr%ces dans un delai de 15 a 30 jours ouvrables.\n\n",133);
    printf("       \33[33m         ");
     printf("       \33[37m         ");
     printf("Si vous avez d'autres questions ou si vous rencontrez des problemes, n'h%csitez pas %c contacter notre                                 service d'assistance. Vous pouvez nous contacter par e-mail %c support@gmail.com.",133,130,130);
     printf("       \33[37m         ");

  }

void conditionutilisation(){
   printf("\033[1;33m");
   printf("\n");
    printf("                                      ==== Bienvenue sur la plateforme === \n");
    printf("\n");
    printf("\033[1;33m");
    printf("                                      =================================== \n");

    printf("\033[1;37m");
    printf("                                          Conditions d'utilisation :\n");


    printf("\033[1;33m");
    printf("                                      =================================== \n");
    printf("\n");

    printf("\033[1;37m");

    printf("                     -Vous devez vous inscrire pour acc%cder certains services          \n",130,130);
    printf("                     -Vous etes responsable de la s%ccurit%c de votre compte\n",130,130);
    printf("                     -Vous ne pouvez pas utiliser la plateforme %c des fins ill%cgales\n",130,133);
    printf("\n");
    printf("\033[1;33m");
    printf("                                     ===================================\n");

    printf("\033[1;37m");


    printf("                                        Politique de confidentialit%c :\n",130);
    printf("\033[1;33m");
    printf("                                     ===================================\n");
    printf("\n");
    printf("\033[1;37m");

    printf("                     -Nous collectons des informations sur votre compte pour fournir nos services\n");
    printf("                     -Vos donn%ces personnelles ne seront pas partag%ces avec des tiers sans votre consentement\n",130,130);
    printf("                     -Nous utilisons des cookies pour am%cliorer votre exp%crience utilisateur\n",130,130);

}

void boite_de_message(char caractere[100]) {
    int i1 = 0;
    cli_mes cli_message[500];
    FILE *message_client = fopen(strtok(caractere, "\n"), "r");
    char mot[500];
    char message1[500];

    if (message_client == NULL) {
        system("cls");
        printfGreen("\n\t\t\tVous n'avez pas de nouveaux messages\n");


        return;

    }

    while (fgets(mot, sizeof(mot), message_client) != NULL) {
        strcpy(cli_message[i1].message_client, mot);
        i1++;
    }

    fclose(message_client);

    system("cls");
    printf("\n\t\t\tVous avez %d messages\n", i1);

    for (int j = 0; j < i1; j++) {
        printf("%d - %s\n", j+1, cli_message[j].message_client);
        char* supp = strchr(cli_message[j].message_client, ':');
        *supp = '\0';
         FILE *message_fournisseur = fopen(cli_message[j].message_client, "a+");
        if (message_fournisseur == NULL) {
            printfRed("Erreur lors de l'ouverture du fichier pour la reponse\n");
            return;
        }

        printf(" \n\033[1;34mVotre r%cponse :\033[0m  ",130);
        scanf(" %[^\n]", message1);
        fprintf(message_fournisseur, "%s : %s\n",caractere, message1);

        fclose(message_fournisseur);

    }
     FILE *message_client2 = fopen(caractere, "w");
        fclose(message_client2);
}

void achat(char caractere[100]) {
    int choix_pays;
    int choix_artisant;
    int choix_fournisseur;
    int i = 0;
    int i1 = 0;
    FILE *py;
    FILE *py2;
    FILE *py3;
    char mot[500];
    char message2[500];
    ar a[500];
    fo f[500];
    do {
        payinvalid :
        system("cls");

        printfBlue("\t\t1. Maroc\t\t2. Mali\t\t3. Togo");
        printfYellow("\n\n\t\tChoisissez un pays   :");

        scanf("%d", &choix_pays);
        printf("\n");
        py = fopen("MAROC", "a+");
        py2 = fopen("MALI", "a+");
        py3 = fopen("TOGO", "a+");

        if (py == NULL || py2 == NULL || py3 == NULL) {
            printf("Erreur lors de l'ouverture des fichiers.\n");
            return;
        }

        switch (choix_pays) {
            case 1:
                while (fgets(mot, sizeof(mot), py) != NULL) {
                    strcpy(a[i].artisanat, mot);
                    i++;
                }
                fclose(py);
                break;
            case 2:
                while (fgets(mot, sizeof(mot), py2) != NULL) {
                    strcpy(a[i].artisanat, mot);
                    i++;
                }
                fclose(py2);
                break;
            case 3:
                while (fgets(mot, sizeof(mot), py3) != NULL) {
                    strcpy(a[i].artisanat, mot);
                    i++;
                }
                fclose(py3);
                break;
            default:
                goto payinvalid;
                return;
        }
    } while(choix_pays < 1 || choix_pays > 3);
    artisanat :

    for (int j = 0; j < i; j++) {
        printf("\t\t\t%d-%s\n", j + 1, a[j].artisanat);
    }
    printfYellow("\n\n\t\tChoisissez un artisanat traditionnel :  ");

    scanf("%d", &choix_artisant);
     printf("\n");

    if (choix_artisant >= 1 && choix_artisant <= i) {
        FILE *arFile = fopen(strtok(a[choix_artisant - 1].artisanat, "\n"), "r");
        if (arFile == NULL) {
            printf("Erreur lors de l'ouverture du fichier.\n");
            return;
        }


        while (fgets(mot, sizeof(mot), arFile) != NULL) {
            strcpy(f[i1].fournisseur, mot);
            i1++;
        }
        fclose(arFile);
fournisseur:

        for (int j2 = 0; j2 < i1; j2++) {
            printf("\t\t\t%d-%s\n", j2 + 1, f[j2].fournisseur);
        }
        printfYellow("\n\n\t\tChoisissez un fournisseur :  ");
        scanf("%d", &choix_fournisseur);
        printf("\n");

        if (choix_fournisseur >= 1 && choix_fournisseur <= i1) {
                char* supp = strchr(f[choix_fournisseur-1].fournisseur, ':');
        *supp = '\0';
           FILE *message_fournisseu = fopen(strtok(f[choix_fournisseur - 1].fournisseur, "\n"), "a+");
            if (message_fournisseu == NULL) {
                printf("Erreur lors de l'ouverture du fichier.\n");
                return;
            }
            printf("\t\t\tEntrez votre message :   ");
            scanf(" %[^\n]", message2);
            fprintf(message_fournisseu, "%s : %s\n",caractere, message2);
            fclose(message_fournisseu);
        }else{
    printf("error");
    goto fournisseur;
    }
    }else{
    printf("error");
    goto artisanat;
    }

}

void acepter_demande(char caractere[100]){

int i1 = 0;
    cli_dem cli_demande[500];
    FILE *accepte_demandeS = fopen(strtok(caractere, "\n"), "r");
    char mot[500];
    int message1;
char porteur_carte_bancaire[20], numero_carte_bancaire[20], code_verification[3];
    if (accepte_demandeS == NULL) {
        printfRed("\n\t\ t\tVous n'avez aucune demande \n");
        return;
    }

    while (fgets(mot, sizeof(mot), accepte_demandeS) != NULL) {
        strcpy(cli_demande[i1].demande_client, mot);
        i1++;
    }
printf("\033[1;32m\n\t\tvous avez %d demande \n\033[0m",i1);
    fclose(accepte_demandeS);
for (int j = 0; j < i1; j++) {
printf("%s \n",cli_demande[j].demande_client);
        printf("Entrez votre mode de payement pour demande %d \n ",j+1);
        printf("1-payement a la livraison 2-Payement par carte bancaire \n");
        scanf("%d", message1);
        do{
            switch(message1){
        case 1:
            printf("Paymeent valide");
            break;
        case 2:
            printf("Nom du porteur de la carte bancaire : \n");
            scanf(" %[^\n]",porteur_carte_bancaire);
            printf("Numero de carte paiment \n");
            scanf(" %[^\n]",numero_carte_bancaire);
            printf("Code de verification : \n");
            scanf(" %[^\n]",code_verification);

            break;
        default:
            printf("mode de payement invalid");
            break;
            }


        }while(message1!=1 || message1!=2);



    }
FILE *message_client2 = fopen(caractere, "w");
        fclose(message_client2);
}

void  boite_de_message_fournisseur(char caractere[100]){

    int i1 = 0;
    fou_mes fou_message[500];
   FILE *message_fournisseur = fopen(strtok(caractere, "\n"), "r");
    char mot[500];
    char message1[500];

    if (message_fournisseur == NULL) {
        printf("Vous n'avez pas de nouveaux messages\n");
        return;
    }

    while (fgets(mot, sizeof(mot), message_fournisseur) != NULL) {
        strcpy(fou_message[i1].message_fournisseur, mot);
        i1++;
    }

    fclose(message_fournisseur);

    printf("Vous avez %d messages\n", i1);

    for (int j = 0; j < i1; j++) {
        printf("%d - %s\n", j+1, fou_message[j].message_fournisseur);
        char* supp = strchr(fou_message[j].message_fournisseur, ':');
        *supp = '\0';
         FILE *message_client = fopen(strtok(fou_message[j].message_fournisseur, "\n"), "a+");
        if (message_client == NULL) {
            printf("Erreur lors de l'ouverture du fichier pour la réponse\n");
            return;
        }

        printf("Entrez votre réponse : ");
        scanf(" %[^\n]", message1);
        fprintf(message_client, "%s : %s\n",caractere, message1);

        fclose(message_client);

    }
FILE *message_fournisseur2 = fopen(caractere, "w");
        fclose(message_fournisseur2);

}

void confirmation(char caractere[100]){
char adresse[100];
float prix;
char nom [100];
printf("l'adresse");
scanf(" %[^\n]",adresse);
printf("le prix");
scanf("%f",&prix);
printf("le nom et le prenom");
scanf(" %[^\n]",nom);
FILE*demande=fopen(adresse,"a+");
fprintf(demande,"%s vous a envoyez une demanade de prix % f",caractere,prix);
fclose(demande);
}

int checkForEscape() {
    if (_kbhit()) {
        char ch = _getch();
        if (ch == 27) {

            return 1; // Return 1 to indicate Escape key pressed
        }
    }
    return 0; // Return 0 to indicate Escape key not pressed
}
