# include "../include/libasm.h"

/*
** fonctions a tester strlen, strcpy, strdup, strcmp , read, write
*/

void test_strlen()
{
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.";
	char *s4 = "Prince, demande à Dieu pardon! Je quarte du pied, j'escarmouche, Je coupe, je feinte... A la fin de l'envoi, je touche.";


	printf("PARAMETRE : %s\n", s1);
	printf("Resultat strlen : %ld\n", strlen(s1));
	printf("Resultat ft_strlen : %ld\n\n", ft_strlen(s1));

	printf("PARAMETRE : %s\n", s2);
	printf("Resultat strlen : %ld\n", strlen(s2));
	printf("Resultat ft_strlen : %ld\n\n", ft_strlen(s2));

	printf("PARAMETRE : %s\n", s3);
	printf("Resultat strlen : %ld\n", strlen(s3));
	printf("Resultat ft_strlen : %ld\n\n", ft_strlen(s3));

	printf("PARAMETRE : %s\n", s4);
	printf("Resultat strlen : %ld\n", strlen(s4));
	printf("Resultat ft_strlen : %ld\n\n", ft_strlen(s4));
}

void test_strcmp()
{
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Hell Yeah !";
	char *s4 = "Hello World !";
	char *s5 = "";

	printf("PARAMETRES :'%s' et '%s'\n", s1, s2);
	printf("Resultat strcmp : %d\n", strcmp(s1, s2));
	printf("Resultat ft_strcmp : %d\n\n", ft_strcmp(s1, s2));

	printf("PARAMETRES :'%s' et '%s'\n", s2, s1);
	printf("Resultat strcmp : %d\n", strcmp(s2, s1));
	printf("Resultat ft_strcmp : %d\n\n", strcmp(s2, s1));

	printf("PARAMETRES :'%s' et '%s'\n", s1, s4);
	printf("Resultat strcmp : %d\n", strcmp(s1, s4));
	printf("Resultat ft_strcmp : %d\n\n", strcmp(s1, s4));

	printf("PARAMETRES :'%s' et '%s'\n", s1, s3);
	printf("Resultat strcmp : %d\n", strcmp(s1, s3));
	printf("Resultat ft_strcmp : %d\n\n", strcmp(s1, s3));

	printf("PARAMETRES :'%s' et '%s'\n", s2, s3);
	printf("Resultat strcmp : %d\n", strcmp(s2, s3));
	printf("Resultat ft_strcmp : %d\n\n", strcmp(s2, s3));

	printf("PARAMETRES :'%s' et '%s'\n", s5, s2);
	printf("Resultat strcmp : %d\n", strcmp(s5, s2));
	printf("Resultat ft_strcmp : %d\n\n", strcmp(s5, s2));
}

void test_strcpy()
{
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.";
	char *s4 = "Prince, demande à Dieu pardon! Je quarte du pied, j'escarmouche, Je coupe, je feinte... A la fin de l'envoi, je touche.";
	char dest1[20];
	char dest2[110];
	char dest3[120];

	printf("PARAMETRE : %s\n", s1);
	printf("Resultat strcpy : %s\n", strcpy(dest1, s1));
	printf("Resultat ft_strcpy : %s\n\n", ft_strcpy(dest1, s1));

	printf("PARAMETRE : %s\n", s2);
	printf("Resultat strcpy : %s\n", strcpy(dest1, s2));
	printf("Resultat ft_strcpy : %s\n\n", ft_strcpy(dest1, s2));

	printf("PARAMETRE : %s\n", s3);
	printf("Resultat strcpy : %s\n", strcpy(dest2, s3));
	printf("Resultat ft_strcpy : %s\n\n", ft_strcpy(dest2, s3));

	printf("PARAMETRE : %s\n", s4);
	printf("Resultat strcpy : %s\n", strcpy(dest3, s4));
	printf("Resultat ft_strcpy : %s\n\n", ft_strcpy(dest2, s4));

}

void test_strdup()
{
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.";
	char *s4 = "Prince, demande à Dieu pardon! Je quarte du pied, j'escarmouche, Je coupe, je feinte... A la fin de l'envoi, je touche.";

	printf("PARAMETRE : %s\n", s1);
	printf("Resultat strdup : %s\n", strdup(s1));
	printf("Resultat ft_strdup : %s\n\n", ft_strdup(s1));

	printf("PARAMETRE : %s\n", s2);
	printf("Resultat strdup : %s\n", strdup(s2));
	printf("Resultat ft_strdup : %s\n\n", ft_strdup(s2));

	printf("PARAMETRE : %s\n", s3);
	printf("Resultat strdup : %s\n", strdup(s3));
	printf("Resultat ft_strdup : %s\n\n", ft_strdup(s3));

	printf("PARAMETRE : %s\n", s4);
	printf("Resultat strdup : %s\n", strdup(s4));
	printf("Resultat ft_strdup : %s\n\n", ft_strdup(s4));
}

void test_write()
{
	int ret;
	int fd;
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.";
	char *s4 = "Prince, demande à Dieu pardon! Je quarte du pied, j'escarmouche, Je coupe, je feinte... A la fin de l'envoi, je touche.";
	char *s5 = "Hello World !\n";
	char *s6 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.\n";
	char *s7 = "Prince, demande à Dieu pardon! Je quarte du pied, j'escarmouche, Je coupe, je feinte... A la fin de l'envoi, je touche.\n";
	

	printf("Tests write depuis une str : \n");

	printf("PARAMETRE : %s\n", s1);
	errno = 0;
	ret = ft_write(1, s1, ft_strlen(s1)); 
	printf("Resultat ft_write ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = write(1, s1, ft_strlen(s1)); 
	printf("Resultat write ret = %d\nErreur = %d\n\n", ret, errno);

	printf("PARAMETRE : %s\n", s2);
	errno = 0;
	ret = ft_write(1, s2, ft_strlen(s2)); 
	printf("Resultat ft_write ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = write(1, s2, ft_strlen(s2)); 
	printf("Resultat write ret = %d\nErreur = %d\n\n", ret, errno);

	printf("PARAMETRE : %s\n", s3);
	errno = 0;
	ret = ft_write(1, s3, ft_strlen(s3)); 
	printf("Resultat ft_write ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = write(1, s3, ft_strlen(s3)); 
	printf("Resultat write ret = %d\nErreur = %d\n\n", ret, errno);

	printf("PARAMETRE : %s\n", s4);
	errno = 0;
	ret = ft_write(1, s4, ft_strlen(s4)); 
	printf("Resultat ft_write ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = write(1, s4, ft_strlen(s4)); 
	printf("Resultat write ret = %d\nErreur = %d\n\n", ret, errno);



	printf("Tests write depuis un fichier: \n");

	fd = open("test/write_test.txt", O_WRONLY);

	printf("PARAMETRE : %s\n", s5);
	errno = 0;
	ret = ft_write(1, s5, ft_strlen(s5)); 
	printf("Resultat ft_write ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = write(1, s5, ft_strlen(s5)); 
	printf("Resultat write ret = %d\nErreur = %d\n\n", ret, errno);
	
	printf("PARAMETRE : %s\n", s6);
	errno = 0;
	ret = ft_write(1, s6, ft_strlen(s6)); 
	printf("Resultat ft_write ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = write(1, s6, ft_strlen(s6)); 
	printf("Resultat write ret = %d\nErreur = %d\n\n", ret, errno);

	printf("PARAMETRE : %s\n", s7);
	errno = 0;
	ret = ft_write(1, s7, ft_strlen(s7)); 
	printf("Resultat ft_write ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = write(1, s7, ft_strlen(s7)); 
	printf("Resultat write ret = %d\nErreur = %d\n\n", ret, errno);
	close(fd);
	
}

void test_read()
{
	int ret;
	int fd;
	char str[2000];

	printf("Test read depuis le standard input\n");
	printf("Veuillez entrer l'input :\n");
	errno = 0;
	ret = ft_read(0, str, 2000);
	printf("La fonction a lu : \n %s\n", str);
	printf("Resultat ft_read ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = read(0, str, 2000);
	printf("La fonction a lu : \n %s\n", str);
	printf("Resultat write ret = %d\nErreur = %d\n\n", ret, errno);

	printf("Test read depuis un fichier\n");

	fd = open("test/demain.txt", O_RDONLY);
	errno = 0;
	ret = ft_read(fd, str, 2000);
	printf("La fonction a lu : \n %s\n", str);
	printf("Resultat ft_read ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = read(fd, str, 2000);
	printf("La fonction a lu : \n %s\n", str);
	printf("Resultat read ret = %d\nErreur = %d\n\n", ret, errno);
	close(fd);
	
	fd = open("test/cyrano.txt", O_RDONLY);
	errno = 0;
	ret = ft_read(fd, str, 2000);
	printf("La fonction a lu : \n %s\n", str);
	printf("Resultat ft_read ret = %d\nErreur = %d\n\n", ret, errno);
	errno = 0;
	ret = read(fd, str, 2000);
	printf("La fonction a lu : \n %s\n", str);
	printf("Resultat read ret = %d\nErreur = %d\n\n", ret, errno);
	close(fd);
}

int main()
{
	printf("****** TEST FT_STRLEN ******\n");
	test_strlen();
	printf("****** TEST FT_STRCMP ******\n");
	test_strcmp();
	printf("****** TEST FT_STRCPY ******\n");
	test_strcpy();
	printf("****** TEST FT_STRDUP ******\n");
	test_strdup();
	printf("****** TEST FT_WRITE ******\n");
	test_write();
	printf("****** TEST FT_READ ******\n");
	test_read();
	return(0);
}