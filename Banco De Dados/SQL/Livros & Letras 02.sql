select titulo, nome from livros inner join autores on id_autorfk = id_autor;
select nome, data_venda, id_venda from vendas inner join clientes on id_clientefk = id_cliente;
select titulo, nome, estoque from livros inner join autores on id_autorfk = id_autor  where estoque >20;
select titulo, valor_total from itens_venda inner join livros on id_livrofk = id_livro inner join vendas on id_vendafk = id_venda where valor_total >50;
select nome, titulo, id_venda from itens_venda inner join vendas on id_vendafk = id_venda inner join clientes on id_cliente = id_clientefk inner join livros on id_livrofk = id_livro;
select nome from livros inner join autores on id_autorfk = id_autor  where preco >40 and preco <70;
select nome from livros inner join autores on id_autorfk = id_autor  where data_publicacao > '1999-12-31';
select nome, valor_total from vendas inner join clientes on id_clientefk = id_cliente where valor_total >200;
select titulo, quantidade from itens_venda inner join livros on id_livrofk = id_livro where quantidade > 1;
select nome, titulo from itens_venda inner join vendas on itens_venda.id_vendafk = vendas.id_venda inner join clientes on id_cliente = id_cliente inner join livros on id_livro = id_livrofk where preco_unitario = 39.90;
----------------------------------------------------------------------
select nome, titulo from autores left join livros on id_autor = id_autorfk;
select nome, id_item, id_vendafk id_livrofk from clientes left join vendas on id_clientefk = id_cliente left join itens_venda on id_vendafk = id_venda;
select titulo, quantidade from itens_venda left join livros on id_livrofk = id_livro;
select nome, valor_total from vendas left join clientes on id_clientefk = id_cliente;
select nome, titulo from autores left join livros on id_autorfk = id_autor and data_publicacao > '1950-01-01';
select titulo, id_venda from livros left join itens_venda on id_livro = id_livrofk left join vendas on id_vendafk = id_venda;
select nome, titulo from autores left join livros on id_autor = id_autorfk where estoque > 20 or livros.id_livro is null;
select nome, sum(itens_venda.quantidade) as total_livros_comprados from clientes left join vendas on id_cliente = id_clientefk left join itens_venda on id_venda = id_vendafk group by autores.id_autor;
select autores.nome, avg(livros.preco) as media from livros left join autores on autores.id_autor = livros.id_autorfk group by autores.id_autor;
----------------------------------------------------------------------------
select nome, titulo from autores right join livros on id_autor = id_autorfk;
select id_item, titulo from itens_venda right join livros on id_livrofk = id_livro;
select titulo, id_vendafk from itens_venda right join livros on id_livrofk = id_livro;
select id_venda, nome from vendas right join clientes on id_clientefk = id_cliente;
select id_livrofk, id_item, id_vendafk, valor_total from itens_venda right join vendas on id_vendafk = id_venda;
----------------------------------------------------------------------------
select nome, titulo from autores full join livros on id_autorfk = id_autor;
select nome, id_venda from clientes full join vendas on id_clientefk = id_cliente;
select titulo, id_venda from livros full join itens_venda on id_livro = id_livrofk full join vendas on id_vendafk = id_venda;
select autores.nome, sum(id_livro) as total from autores left join livros on id_autor = id_autorfk group by id_autor;
-------------------------------------------------------------------------------

select * from autores;
select * from clientes;
select * from livros;
select * from vendas;
select * from itens_venda;



