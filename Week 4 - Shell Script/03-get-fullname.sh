result=$(cat /etc/passwd | grep -w $1)

fullname=$(echo $(echo $result | cut -d':' -f5) | cut -d',' -f1)

echo $fullname