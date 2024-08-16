FROM --platform=linux/amd64 ubuntu:20.04

RUN apt-get update \
    && apt-get install -y bison flex libreadline-dev libc6-dev libfl-dev wget vim make gcc curl unzip build-essential flex bison

RUN useradd -m expl
USER expl

WORKDIR /home/expl
