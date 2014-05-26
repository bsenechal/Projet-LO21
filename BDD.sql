CREATE TABLE Etudiant (
	id_etudiant int UNSIGNED NOT NULL AUTO_INCREMENT,
	login varchar(30),
	passwd varchar(60),
	nom varchar(30),
	prenom varchar(30),
	sexe CHAR(1),
	date_naissance DATETIME NOT NULL,
   	email varchar(100),
   	commentaires TEXT,
   	PRIMARY KEY (id_etudiant)
   	);


CREATE TABLE Dossier (
	id_dossier int UNSIGNED NOT NULL AUTO_INCREMENT,
	id_etudiant int UNSIGNED,
	id_solution int UNSIGNED,
	id_filiere int UNSIGNED,
	semestre_actuel int(5),
	
	id_uv_suivies int UNSIGNED,
	PRIMARY KEY (id_dossier)
   	);

CREATE TABLE Filiere (
	id_filiere int UNSIGNED NOT NULL AUTO_INCREMENT,
	nom varchar(50),
	description varchar(255),
	PRIMARY KEY (id_filiere)
   	);	

CREATE TABLE UV (
	id_UV int UNSIGNED NOT NULL AUTO_INCREMENT,
	nom_UV varchar(2),
	/*nb_credits			peut varier selon si l'UV est TM, CS, TSH, etc...*/
	description varchar(255),
	jointure_type_uv int id_type, 
	PRIMARY KEY (id_UV)
   	);
   	
CREATE TABLE type_uv (
	id_type int UNSIGNED NOT NULL AUTO_INCREMENT,
	type_uv varchar (5),
	description varchar(255),
	PRIMARY KEY (id_type)
	);
	
CREATE TABLE jointure_type_uv (
	id_jointure int UNSIGNED NOT NULL AUTO_INCREMENT,
	id_UV int UNSIGNED,
	id_type int UNSIGNED
	PRIMARY KEY (id_jointure)
	);
	
	
CREATE TABLE cursus (
	id_cursus int UNSIGNED NOT NULL AUTO_INCREMENT,
	nom_cursus varchar (5),
	description varchar(255)
	
	PRIMARY KEY (id_cursus)
	);
	
CREATE TABLE jointure_cursus (
	id_jointure int UNSIGNED NOT NULL AUTO_INCREMENT,
	id_UV int UNSIGNED,
	id_cursus int UNSIGNED
	PRIMARY KEY (id_jointure)
	);	
	
CREATE TABLE semestre (
	id_semestre int UNSIGNED NOT NULL AUTO_INCREMENT,
	nom varchar(10),
	numero int(2),
	PRIMARY KEY (id_semestre)
	);
	
CREATE TABLE note (
	id_note int UNSIGNED NOT NULL AUTO_INCREMENT,
	note varchar(2),
	PRIMARY KEY (id_note)
	);
	
	
CREATE TABLE UV_suivies (
	id_uv_suivies int UNSIGNED NOT NULL AUTO_INCREMENT,
	id_uv int UNSIGNED,
	id_semestre int UNSIGNED,
	id_cursus int UNSIGNED,
	id_type_uv int UNSIGNED,
	//etc..
	PRIMARY KEY (id_note)
	);
	
	