Create table clientes(
	codigo_c serial primary key,
	nome varchar(20),
	cpf varchar(14),
	data_nasc date,
	rua varchar(20),
	numero int,
	cidade varchar(20),
	estado varchar(2),
	cep varchar(12)
)
create table pedidos(
	numero_p int primary key,
	data_criacao date,
	status varchar(14),
	codigo_cfk int, foreign key(codigo_cfk) references clientes(codigo_c)
)
create table fornecedores(
	codigo_f int primary key,
	nome varchar(20),
	cnpj varchar(15),
	telefone varchar(14),
	rua varchar(20),
	numero int,
	cidade varchar(20),
	estado varchar(2),
	cep varchar(12)
)
create table produto(
	codigo_p int primary key,
	codigo_ffk int, foreign key (codigo_ffk) references fornecedores(codigo_f),
	nome varchar(20),
	descricao varchar(30),
	preco_u decimal,
	qtd_estoque int
)
create table itens_pedidos(
	numero_fk int, foreign key (numero_fk) references pedidos(numero_p),
	codigo_pfk int, foreign key(codigo_pfk) references produto(codigo_p),
	qtd_comprada int,
	valor_total decimal
)
-------------------------------------------------------------------------------------
insert into clientes(nome, cpf, data_nasc, rua, numero, cidade,estado, cep) values
('Maria Silva', '12345678900', '1985-05-15', 'rua das laranjeiras', 100, 'sao paulo', 'sp', '01000-000'),
('Joao Santos', '98765432100', '1990-07-20', 'av paulista', 1500, 'campinas', 'sp', '01310-200'),
('Ana Pereira', '11223344556', '1987-11-10', 'rua das verde', 200, 'sao paulo', 'sp', '13040-000'),
('Carlos Moura', '33445566778', '1975-02-25', 'av brasil', 3000, 'rio de janeiro', 'rj', '220050-001'),
('Laura Dias', '99887766554', '1982-09-05', 'rua das flores', 1100, 'curitiba', 'pr', '80050-010')

insert into produto(codigo_p, nome,descricao,preco_u,qtd_estoque) values 
(101, 'notebook dell', 'notebook i5 8gb 256gb ssd', 3500.00, 15),
(102, 'smartphone samsung', 'galaxy s21 128gb', 2800.00, 30),
(103, 'impressora hp', 'impressora a jato de tinta', 600.00, 20),
(104, 'teclado mecanico', 'teclado rgb gamer', 120.00, 60),
(105, 'mouse logitech', 'mouse optico sem fio', 3500.00, 15)

insert into fornecedores(codigo_f, nome, cnpj, telefone,rua, numero, cidade,estado, cep) values 
(201, 'tech distribuidora', '12345678000190', '(11)4000-3000', 'rua da liberdade', 500, 'sao paulo', 'sp', 01500-000),
(202, 'eletronicos brasil', '98765432000180', '(21)2500-4000', 'rua das flores', 80, 'rio de janeiro', 'rj', 20030-001),
(203, 'fasttech', '34567890000150', '(31)3500-3200', 'av amazonas', 1200, 'belo horizonte', 'mg', 30140-000),
(204, 'digital solutions', '4567891200170', '(41)3200-2500', 'av do comercio', 750, 'curitiba', 'pr', 80060-050),
(205, 'pc hardware', '56789123000130', '(51)3200-3200', 'rua 7 de setembro', 999, 'porto alegre', 'rs', 90030-020),
(206, 'eletroshop', '67891234000110', '(21)2500-8000', 'av presidente', 100, 'rio de janeiro', 'rj', 200-40-040)

insert into pedidos(numero_p,data_criacao,status) values
(1001, '2024-10-01', 'concluido'),
(1002, '2024-10-03', 'em andamento'),
(1003, '2024-10-05', 'concluido'),
(1004, '2024-10-06', 'cancelado'),
(1005, '2024-10-07', 'em andamento')

insert into itens_pedidos(qtd_comprada,valor_total) values
(101, 3500.00),
(104, 500.00),
(102, 2800.00),
(103, 600.00),
(104, 250.00)

--------------------------------------------------------------------
select numero_p, nome, data_criacao from pedidos inner join clientes on codigo_cfk = codigo_c;
select nome, numero_p from pedidos right join clientes on codigo_cfk = codigo_c;
select nome, codigo_p from itens_pedidos right join produto on codigo_pfk = codigo_p;
select min(preco_u) from produto where qtd_estoque > 0;
select max(qtd_estoque) from produto;
select avg(valor_total) from itens_pedidos;
select sum(valor_total), nome from itens_pedidos right join clientes on numero_fk = numero_p;








