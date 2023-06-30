# Test task for YADRO lab

Чтобы запустить программу внутри docker-контейнера, необходимо:

1) Создать образ. Внутри директории, в которой хранятся все необходимые файлы (все файлы папки src), выполнить команду 

```
docker build -t <image_name> .
```

(далее все остальные команды необходимо запускать в той же самой директории)
После выполнения этой команды создатся образ с именем <image_name>.

2) Создать и запустить docker-контейнер. Выполнить команду

```
docker run -it --name <container_name> <imag_name>
```

После этого создатся и будет выполнен docker-контейнер с именем <container_name>. Программа, решающая тестовое задания, начнёт сразу выполняться, т.к. это указано в docker-файле.

3) Для повторного исполнения уже существующего контейнера <container_name> необходимо ввести следующую комманду

```
docker start <container_name> -i
```