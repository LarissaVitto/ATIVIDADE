CREATE TABLE chat(
	id_chat serial PRIMARY KEY,
	nome varchar(20),
	msg varchar(280)
);

DROP TABLE chat;

SELECT * FROM chat;
SELECT * FROM chat ORDER BY id_chat;

INSERT INTO chat (nome, msg) VALUES ('Larissa Vitto', 'Ola me chamo Larissa');
INSERT INTO chat (nome, msg) VALUES ('Vagner', 'Ola me chamo Vagner');
INSERT INTO chat (nome, msg) VALUES ('Gabriel', 'Ola me chamo Gabriel');
INSERT INTO chat (nome, msg) VALUES ('Maria', 'Ola me chamo Maria');
INSERT INTO chat (nome, msg) VALUES ('Evelyn', 'Ola me chamo Evelyn');
INSERT INTO chat (nome, msg) VALUES ('Arthur Siega', 'Ola me chamo Arthur Siega');
INSERT INTO chat (nome, msg) VALUES ('Domini', 'Ola me chamo Domini');
INSERT INTO chat (nome, msg) VALUES ('Gustavo', 'Ola me chamo Gustavo');
INSERT INTO chat (nome, msg) VALUES ('Arthur Baschera', 'Ola me chamo Arthur Baschera');
INSERT INTO chat (nome, msg) VALUES ('William', 'Ola me chamo William');
INSERT INTO chat (nome, msg) VALUES ('Agatha', 'Ola me chamo Agatha');

INSERT INTO chat (nome, msg) VALUES ('João', 'Boa');

UPDATE chat SET nome = 'Larissa', msg = 'Teste'  WHERE id_chat = 1;

DELETE FROM chat WHERE id_chat = 4;
DELETE FROM chat;


