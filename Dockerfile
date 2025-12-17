FROM gcc:latest

RUN apt update && apt install -y iputils-ping

WORKDIR /app

COPY BinarySearch.cpp .

RUN g++ BinarySearch.cpp -o BinarySearch

CMD ["sh", "-c", "./BinarySearch || true; tail -f /dev/null"]