#!/bin/bash 
source name.sh
docker build  --no-cache -t ${IMAGE} -f Dockerfile .
