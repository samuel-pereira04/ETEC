autores: Vitor cauã almeida moura e Samuel gomes pereira
turma: 1c2
data:26/08/2026
-- 1
-- Exiba nome e salário, acrescentando 30% ao salário.
SELECT nome, salario, salario * 1.30 AS novo_salario
FROM funcionario;
-- 2
-- Exiba nome, salário e salário com 20% de desconto
-- dos funcionários de Campinas.
SELECT nome, salario, salario * 0.80 AS salario_desconto
FROM funcionario
WHERE cidade = 'Campinas';
-- 3
-- Exiba nome e salário dos funcionários que recebem
-- mais de 1500.
SELECT nome, salario
FROM funcionario
WHERE salario > 1500;
-- 4
-- Exiba nome e cidade dos funcionários que não são
-- de Valinhos. Duas maneiras diferentes.
-- Maneira 1
SELECT nome, cidade
FROM funcionario
WHERE cidade <> 'Valinhos';
-- Maneira 2
SELECT nome, cidade
FROM funcionario
WHERE NOT cidade = 'Valinhos';
-- 5
-- Exiba idfuncionario e cidade dos funcionários
-- de Valinhos ou Campinas.
SELECT idfuncionario, cidade
FROM funcionario
WHERE cidade IN ('Valinhos', 'Campinas');
6
-- Exiba idfuncionario, cargo e salário dos funcionários
-- que não são de São Paulo e ganham 1000 ou mais.
SELECT idfuncionario, cargo, salario
FROM funcionario
WHERE cidade <> 'São Paulo'
 AND salario >= 1000;
-- 7
-- Exiba o nome dos funcionários que não possuem cargo.
SELECT nome
FROM funcionario
WHERE cargo IS NULL;
-- 8
-- Exiba nome e salário dos funcionários com salário
-- entre 500 e 1500.
SELECT nome, salario
FROM funcionario
WHERE salario BETWEEN 500 AND 1500;
-- 9
-- Exiba nome e email dos funcionários que usam Hotmail.
SELECT nome, email
FROM funcionario
WHERE email LIKE '%@hotmail%';
-- 10
-- Exiba nome e email dos funcionários que possuem
-- email do Brasil (.br).
SELECT nome, email
FROM funcionario
WHERE email LIKE '%.br';
-- 11
-- Exiba nome e email dos funcionários cujo email
-- não termina com ".com".
SELECT nome, email
FROM funcionario
WHERE email NOT LIKE '%.com';
-- 12
Exiba nome e email dos funcionários que possuem
-- a letra "r" na terceira posição do nome.
SELECT nome, email
FROM funcionario
WHERE nome LIKE '__r%';