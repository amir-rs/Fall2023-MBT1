#!/bin/bash


generate_password() {

  characters="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-=_+"


  password=$(head /dev/urandom | tr -dc "$characters" | head -c 12)

  echo "$password"
}

echo "Your random password is: $(generate_password)"
