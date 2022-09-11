## Add user
CREATE USER 'sqluser'@'%' IDENTIFIED WITH mysql_native_password BY 'password';

## Grant Priviledges
GRANT ALL PRIVILEGES ON *.* TO 'sqluser'@'%';

## Flush Priviledges
FLUSH PRIVILEGES;
