CREATE TABLE disciplina(
	codigo_disciplina serial PRIMARY KEY,
	nome_disciplina varchar(15)
);
CREATE TABLE professor(
	matricula_professor serial PRIMARY KEY,
	telefone_professor int,
	cpf_professor int,
	nome_professor varchar(20),
	data_nasc_professor date,
	endereco_professor varchar(30)
);

ALTER TABLE professor ALTER COLUMN cpf_professor TYPE bigint;
ALTER TABLE professor ALTER COLUMN telefone_professor TYPE bigint;
ALTER TABLE professor ALTER COLUMN data_nasc_professor TYPE date;

ALTER TABLE disciplina ADD COLUMN leciona TYPE varchar FOREIGN KEY;
select * from professor;

INSERT INTO professor (telefone_professor, cpf_professor, nome_professor, data_nasc_professor, endereco_professor) VALUES (99900000999, 1111111111, 'Carla', '1970-01-01', 'Dois Vizinhos');
INSERT INTO professor (telefone_professor, cpf_professor, nome_professor, data_nasc_professor, endereco_professor) VALUES (99999090999, 1111113411, 'Joana', '1980-09-09', 'Dois Vizinhos');
INSERT INTO professor (telefone_professor, cpf_professor, nome_professor, data_nasc_professor, endereco_professor) VALUES (943434349999, 1111234311, 'Martins', '1990-05-05', 'Dois Vizinhos');
INSERT INTO professor (telefone_professor, cpf_professor, nome_professor, data_nasc_professor, endereco_professor) VALUES (92222229999, 1119897311, 'Luana', '2000-06-06', 'Dois Vizinhos');
INSERT INTO professor (telefone_professor, cpf_professor, nome_professor, data_nasc_professor, endereco_professor) VALUES (99999999999, 1111111111, 'João', '1930-03-03', 'Dois Vizinhos');

INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('matemática', 1);
INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('química', 2);
INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('física', 3);
INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('português', 4);
INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('redação', 5);

