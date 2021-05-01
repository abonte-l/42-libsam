# include "../include/libasm.h"

void test_strlen(void)
{
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.";
	char *s4 = "Je coupe, je feinte... A la fin de l'envoi, je touche.";


	printf("PARAMETRE : %s\n", s1);
	printf("\033[32;1mResultat strlen : %ld\n\033[0m", strlen(s1));
	printf("\033[33;1mResultat ft_strlen : %ld\n\n\033[0m", ft_strlen(s1));

	printf("PARAMETRE : %s\n", s2);
	printf("\033[32;1mResultat strlen : %ld\n\033[0m", strlen(s2));
	printf("\033[33;1mResultat ft_strlen : %ld\n\n\033[0m", ft_strlen(s2));

	printf("PARAMETRE : %s\n", s3);
	printf("\033[32;1mResultat strlen : %ld\n\033[0m", strlen(s3));
	printf("\033[33;1mResultat ft_strlen : %ld\n\n\033[0m", ft_strlen(s3));

	printf("PARAMETRE : %s\n", s4);
	printf("\033[32;1mResultat strlen : %ld\n\033[0m", strlen(s4));
	printf("\033[33;1mResultat ft_strlen : %ld\n\n\033[0m", ft_strlen(s4));
}

void test_strcmp(void)
{
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Hell Yeah !";
	char *s4 = "Hello World !";
	char *s5 = "";

	printf("PARAMETRES :'%s' et '%s'\n", s1, s2);
	printf("\033[32;1mResultat strcmp : %d\n\033[0m", strcmp(s1, s2));
	printf("\033[33;1mResultat ft_strcmp : %d\n\n\033[0m", ft_strcmp(s1, s2));

	printf("PARAMETRES :'%s' et '%s'\n", s2, s1);
	printf("\033[32;1mResultat strcmp : %d\n\033[0m", strcmp(s2, s1));
	printf("\033[33;1mResultat ft_strcmp : %d\n\n\033[0m", strcmp(s2, s1));

	printf("PARAMETRES :'%s' et '%s'\n", s1, s4);
	printf("\033[32;1mResultat strcmp : %d\n\033[0m", strcmp(s1, s4));
	printf("\033[33;1mResultat ft_strcmp : %d\n\n\033[0m", strcmp(s1, s4));

	printf("PARAMETRES :'%s' et '%s'\n", s1, s3);
	printf("\033[32;1mResultat strcmp : %d\n\033[0m", strcmp(s1, s3));
	printf("\033[33;1mResultat ft_strcmp : %d\n\n\033[0m", strcmp(s1, s3));

	printf("PARAMETRES :'%s' et '%s'\n", s2, s3);
	printf("\033[32;1mResultat strcmp : %d\n\033[0m", strcmp(s2, s3));
	printf("\033[33;1mResultat ft_strcmp : %d\n\n\033[0m", strcmp(s2, s3));

	printf("PARAMETRES :'%s' et '%s'\n", s5, s2);
	printf("\033[32;1mResultat strcmp : %d\n\033[0m", strcmp(s5, s2));
	printf("\033[33;1mResultat ft_strcmp : %d\n\n\033[0m", strcmp(s5, s2));
}

void test_strcpy(void)
{
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.";
	char *s4 = "Je coupe, je feinte... A la fin de l'envoi, je touche.";
	char dest1[20];
	char dest2[120];
	char dest3[60];

	printf("PARAMETRE : %s\n", s1);
	printf("\033[32;1mResultat strcpy : %s\n\033[0m", strcpy(dest1, s1));
	printf("\033[33;1mResultat ft_strcpy : %s\n\n\033[0m", ft_strcpy(dest1, s1));

	printf("PARAMETRE : %s\n", s2);
	printf("\033[32;1mResultat strcpy : %s\n\033[0m", strcpy(dest1, s2));
	printf("\033[33;1mResultat ft_strcpy : %s\n\n\033[0m", ft_strcpy(dest1, s2));

	printf("PARAMETRE : %s\n", s3);
	printf("\033[32;1mResultat strcpy : %s\n\033[0m", strcpy(dest2, s3));
	printf("\033[33;1mResultat ft_strcpy : %s\n\n\033[0m", ft_strcpy(dest2, s3));

	printf("PARAMETRE : %s\n", s4);
	printf("\033[32;1mResultat strcpy : %s\n\033[0m", strcpy(dest3, s4));
	printf("\033[33;1mResultat ft_strcpy : %s\n\n\033[0m", ft_strcpy(dest3, s4));

}

void test_strdup(void)
{
	char *s1 = "Hello World !";
	char *s2 = ".";
	char *s3 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.";
	char *s4 = "Je coupe, je feinte... A la fin de l'envoi, je touche.";
	char *path = NULL;

	printf("PARAMETRE : %s\n", s2);
	path = strdup(s2);
	printf("\033[32;1mResultat strdup : %s\n\033[0m", path);
	free(path);
	path = ft_strdup(s2);
	printf("\033[33;1mResultat ft_strdup : %s\n\n\033[0m", path);
	free(path);

	printf("PARAMETRE : %s\n", s1);
	path = strdup(s1);
	printf("\033[32;1mResultat strdup : %s\n\033[0m", path);
	free(path);
	path = ft_strdup(s1);
	printf("\033[33;1mResultat ft_strdup : %s\n\n\033[0m", path);
	free(path);

	printf("PARAMETRE : %s\n", s3);
	path = strdup(s3);
	printf("\033[32;1mResultat strdup : %s\n\033[0m", path);
	free(path);
	path = ft_strdup(s3);
	printf("\033[33;1mResultat ft_strdup : %s\n\n\033[0m", path);
	free(path);

	printf("PARAMETRE : %s\n", s4);
	path = strdup(s4);
	printf("\033[32;1mResultat strdup : %s\n\033[0m", path);
	free(path);
	path = ft_strdup(s4);
	printf("\033[33;1mResultat ft_strdup : %s\n\n\033[0m", path);
	free(path);
	
}

void test_write(void)
{
	int ret;
	int fd;
	char *s1 = "Hello World !";
	char *s2 = "";
	char *s3 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.";
	char *s4 = "Je coupe, je feinte... A la fin de l'envoi, je touche.";
	char *s5 = "Hello World !\n";
	char *s6 = "Demain, dès l’aube, à l’heure où blanchit la campagne, Je partirai. Vois-tu, je sais que tu m’attends.\n";
	char *s7 = "Je coupe, je feinte... A la fin de l'envoi, je touche.\n";
	

	printf("\n\033[37;44;1mTest write depuis une str :\033[0;49m\n\n");

	printf("PARAMETRE : %s\n\n", s1);
	errno = 0;
	ret = ft_write(1, s1, ft_strlen(s1));
	printf("\n");
	printf("\033[33;1mResultat ft_write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	errno = 0;
	printf("\n\033[0m");
	ret = write(1, s1, ft_strlen(s1)); 
	printf("\n");
	printf("\033[32;1mResultat write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);

	printf("PARAMETRE : %s\n\n", s2);
	errno = 0;
	printf("\n");
	ret = ft_write(1, s2, ft_strlen(s2));
	printf("\n");
	printf("\033[33;1mResultat ft_write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	errno = 0;
	printf("\n\033[0m");
	ret = write(1, s2, ft_strlen(s2)); 
	printf("\033[32;1mResultat write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);

	printf("PARAMETRE : %s\n\n", s3);
	errno = 0;
	ret = ft_write(1, s3, ft_strlen(s3));
	printf("\n");
	printf("\033[33;1mResultat ft_write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	errno = 0;
	printf("\n\033[0m");
	ret = write(1, s3, ft_strlen(s3)); 
	printf("\n");
	printf("\033[32;1mResultat write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);

	printf("PARAMETRE : %s\n\n", s4);
	errno = 0;
	printf("\n");
	ret = ft_write(1, s4, ft_strlen(s4)); 
	printf("\n");
	printf("\033[33;1mResultat ft_write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	errno = 0;
	printf("\n\033[0m");
	ret = write(1, s4, ft_strlen(s4)); 
	printf("\n");
	printf("\033[32;1mResultat write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);

	printf("\n\n\033[37;44;1mTest write vers un fichier :\033[0;49m\n\n");
	printf("\033[3mchemin fichier : test/write_test.txt\033[0;49m\n\n");

	fd = open("test/write_test.txt", O_WRONLY);

	printf("PARAMETRE : %s\n", s5);
	write(fd, "PARAMETRE :",11);
	write(fd, s5, strlen(s5));
	write(fd, "\n",1);
	errno = 0;
	write(fd, "fonction write :\n",17);
	ret = write(fd, s5, ft_strlen(s5)); 
	printf("\033[32;1mResultat write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	errno = 0;
	write(fd, "\n",1);
	write(fd, "fonction ft_write :\n",20);
	ret = ft_write(fd, s5, ft_strlen(s5)); 
	printf("\033[33;1mResultat ft_write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	
	printf("PARAMETRE : %s\n", s6);
	write(fd, "\n",1);
	write(fd, "\n",1);
	write(fd, "PARAMETRE :",11);
	write(fd, s6, strlen(s6));
	write(fd, "\n",1);
	errno = 0;
	write(fd, "fonction write :\n",17);
	ret = write(fd, s6, ft_strlen(s6)); 
	printf("\033[32;1mResultat write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	errno = 0;
	write(fd, "\n",1);
	write(fd, "fonction ft_write :\n",20);
	ret = ft_write(fd, s6, ft_strlen(s6)); 
	printf("\033[33;1mResultat ft_write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);

	printf("PARAMETRE : %s\n", s7);
	write(fd, "\n",1);
	write(fd, "\n",1);
	write(fd, "PARAMETRE :",11);
	write(fd, s7, strlen(s7));
	write(fd, "\n",1);
	errno = 0;
	write(fd, "fonction write :\n",17);
	ret = write(fd, s7, ft_strlen(s7)); 
	printf("\033[32;1mResultat write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	errno = 0;
	write(fd, "\n",1);
	write(fd, "fonction ft_write :\n",20);
	ret = ft_write(fd, s7, ft_strlen(s7)); 
	printf("\033[33;1mResultat ft_write ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	close(fd);
	
}

void test_read(void)
{
	int ret;
	int fd;
	char str[700];
	char strb[1000];

	printf("\033[37;44;1mTest read depuis le standard input :\033[0;49m\n\n");
	printf("Veuillez entrer l'input :\n");
	errno = 0;
	ret = read(0, str, 700);
	printf("La fonction a lu :\n%s\n", str);
	printf("\033[32;1mResultat read ret = %d\nErreur = %i\n\n\033[0m", ret, errno);
	errno = 0;
	printf("Veuillez entrer le meme input :\n");
	ret = ft_read(0, str, 700);
	printf("La fonction a lu :\n%s\n", str);
	printf("\033[33;1mResultat ft_read ret = %d\nErreur = %i\n\n\033[0m", ret, errno);

	printf("\033[37;44;1mTest read depuis un fichier :\033[0;49m\n\n");

	fd = open("test/demain.txt", O_RDONLY);
	errno = 0;
	ret = read(fd, str, 700);
	printf("La fonction a lu : \n%s\n", str);
	printf("\033[32;1mResultat read ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	close(fd);
	
	fd = open("test/demain.txt", O_RDONLY);
	errno = 0;
	ret = ft_read(fd, str, 700);
	printf("La fonction a lu : \n%s\n", str);
	printf("\033[33;1mResultat ft_read ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	close(fd);
	
	fd = open("test/cyrano.txt", O_RDONLY);
	errno = 0;
	ret = read(fd, strb, 1000);
	printf("La fonction a lu : \n%s\n", strb);
	printf("\033[32;1mResultat read ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	close(fd);
	fd = open("test/cyrano.txt", O_RDONLY);
	errno = 0;
	ret = ft_read(fd, strb, 1000);
	printf("La fonction a lu : \n%s\n", strb);
	printf("\033[33;1mResultat ft_read ret = %d\nErreur = %d\n\n\033[0m", ret, errno);
	close(fd);
}

int main(void)
{
	printf("\nLes resultats des tests seront presentés ainsi :\n");
	printf("\033[32;1mResultats de la fonction officielle\n");
	printf("\033[33;1mResultats de ma fonction \n\n");
	printf("\033[37;1m****** TEST FT_STRLEN ******\n\n\033[0m");
	test_strlen();
	printf("\n\n\n");
	printf("\033[37;1m****** TEST FT_STRCMP ******\n\n\033[0m");
	test_strcmp();
	printf("\n\n\n");
	printf("\033[37;1m****** TEST FT_STRCPY ******\n\n\033[0m");
	test_strcpy();
	printf("\n\n\n");
	printf("\033[37;1m****** TEST FT_STRDUP ******\n\n\033[0m");
	test_strdup();
	printf("\n\n\n");
	printf("\033[37;1m****** TEST FT_WRITE ******\n\n\033[0m");
	test_write();
	printf("\n\n\n");
	printf("\033[37;1m****** TEST FT_READ ******\n\n\033[0m");
	test_read();
	printf("\n");
	return(0);
}