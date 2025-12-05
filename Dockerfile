
FROM gcc:latest


WORKDIR /app


COPY sec1.cpp .


RUN g++ sec1.cpp -o sec1


CMD ["./sec1"]
