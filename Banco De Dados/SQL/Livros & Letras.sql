create table autores(
	id_autor SERIAL PRIMARY KEY,
	nome VARCHAR(100),
	data_nascimento DATE,
	nacionalidade VARCHAR(50)
)
create table livros(
    id_livro SERIAL PRIMARY KEY,
    titulo VARCHAR(200),
    id_autorfk INT, FOREIGN KEY (id_autorfk) REFERENCES autores(id_autor),
    data_publicacao DATE,
    preco DECIMAL(10, 2),
	estoque INT
)
create table clientes(
	id_cliente SERIAL PRIMARY KEY,
    nome VARCHAR(100),
	email VARCHAR(100),
    telefone VARCHAR(15),
    data_cadastro DATE
)
create table vendas(
	id_venda SERIAL PRIMARY KEY,
    id_clientefk INT, FOREIGN KEY (id_clientefk) REFERENCES clientes(id_cliente),
    data_venda DATE,
    valor_total DECIMAL(10, 2)
)
create table itens_venda(
	id_item SERIAL PRIMARY KEY,
    id_vendafk INT, FOREIGN KEY (id_vendafk) REFERENCES vendas(id_venda),
    id_livrofk INT, FOREIGN KEY (id_livrofk) REFERENCES livros(id_livro),
    quantidade INT,
    preco_unitario DECIMAL(10, 2)
	)

INSERT INTO autores (nome, data_nascimento, nacionalidade) VALUES
('Gabriel Garcia Marquez', '1927-03-06', 'Colombiano'),
('J.K. Rowling', '1965-07-31', 'Britânica'),
('George Orwell', '1903-06-25', 'Britânico'),
('Jane Austen', '1775-12-16', 'Britânica'),
('Jorge Amado', '1912-08-10', 'Brasileiro');

INSERT INTO livros (titulo, id_autorfk, data_publicacao, preco, estoque) VALUES
('Cem Anos de Solidão', 1, '1967-05-30', 39.90, 10),
('Harry Potter e a Pedra Filosofal', 2, '1997-06-26', 29.90, 15),
('1984', 3, '1949-06-08', 24.90, 8),
('Orgulho e Preconceito', 4, '1813-01-28', 19.90, 12),
('Capitães da Areia', 5, '1937-01-01', 22.90, 20);

INSERT INTO clientes (nome, email, telefone, data_cadastro) VALUES
('Alice Silva', 'alice.silva@email.com', '11987654321', '2023-01-15'),
('Bruno Santos', 'bruno.santos@email.com', '11976543210', '2023-02-10'),
('Carla Souza', 'carla.souza@email.com', '11965432109', '2023-03-20'),
('Diego Pereira', 'diego.pereira@email.com', '11954321098', '2023-04-12'),
('Evelyn Rocha', 'evelyn.rocha@email.com', '11943210987', '2023-05-05');

INSERT INTO vendas (id_clientefk, data_venda, valor_total) VALUES
(1, '2023-06-01', 59.80),
(2, '2023-06-15', 29.90),
(3, '2023-07-01', 44.80),
(4, '2023-08-05', 24.90),
(5, '2023-08-20', 39.90);

INSERT INTO itens_venda (id_vendafk, id_livrofk, quantidade, preco_unitario) VALUES
(1, 1, 1, 39.90),
(1, 4, 1, 19.90),
(2, 2, 1, 29.90),
(3, 3, 1, 24.90),
(3, 5, 1, 19.90),
(4, 3, 1, 24.90),
(5, 1, 1, 39.90);


select titulo, nome from livros inner join autores on id_autorfk = id_autor;
select id_vendafk, id_clientefk, clientes.nome, livros.titulo, itens_venda.quantidade, itens_venda.preco_unitario from itens_venda inner join vendas on id_vendafk = id_venda inner join clientes on id_clientefk = id_cliente inner join livros on id_livrofk = id_livro;
select livros.titulo, sum(itens_venda.quantidade * itens_venda.preco_unitario) as valor_total_vendas from itens_venda inner join livros on itens_venda.id_livrofk = livros.id_livro group by livros.titulo order by valor_total_vendas desc;

