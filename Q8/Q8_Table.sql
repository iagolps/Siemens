CREATE TABLE IF NOT EXISTS dogs (
	id INTEGER NOT NULL PRIMARY KEY,
	name VARCHAR(50) NOT NULL
);

CREATE TABLE IF NOT EXISTS cats (
	id INTEGER NOT NULL PRIMARY KEY,
	name VARCHAR(50) NOT NULL
);

INSERT INTO dogs (ID, name)
VALUES
	(1, 'Max'),
	(2, 'Bella'),
	(3, 'Charlie'),
	(4, 'Lucy'),
	(5, 'Cooper'),
	(6, 'Chloe')
	(7, 'Simba');

INSERT INTO cats (ID, name)
VALUES
	(1, 'Oliver'),
	(2, 'Luna'),
	(3, 'Milo'),
	(4, 'Chloe'),
	(5, 'Simba'),
	(6, 'Bella'),
	(7, 'Lucy');