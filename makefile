

all:
	@echo " Lyosh compiling..."

	@echo " gcc -Wall -c ./main.c -include ./games.c -o ./lyosh.o  "
	@echo " ld -wall -o  lyosh  ./lyosh.o ./games.o "

	gcc -Wall -c ./main.c -include ./games.c ./config.c ./editor.c ./command.c  ./maker.c
	ld -wall -o  lyosh  ./lyosh.o ./games.o ./config.o ./editor.c  ./command.c  ./maker.c




clear:
	@echo " Clear... "
	rm -rf *.o
	rm -rf ./lyosh

help: #
	@echo " Lyosh terminal by Aleksei R "
        @echo "  --config  - для работы с файлом конфигурации "
        @echo "  --history  - для работы с файлом истории команд "
        @echo "  --lyo   - для обработки команд из пакетного файла "
