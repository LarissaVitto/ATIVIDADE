CREATE TABLE disciplina(
	codigo_disciplina serial PRIMARY KEY,
	nome_disciplina varchar(15),
	matricula_idfk int, foreign key(matricula_idfk) REFERENCES professor(matricula_professor)
);

select * from professor;
select * from disciplina;

INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('matemática', 1);
INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('química', 2);
INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('física', 3);
INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('português', 4);
INSERT INTO disciplina (nome_disciplina, matricula_idfk) VALUES ('redação', 5);