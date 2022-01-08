result=$(cat /etc/passwd | grep -w $1)

username=$(echo $result | cut -d':' -f1)
userid=$(echo $result | cut -d':' -f3)
fullname=$(echo $(echo $result | cut -d':' -f5) | cut -d',' -f1)
homedir=$(echo $result | cut -d':' -f6)

echo "Username: $username"
echo "User ID: $userid"
echo "Full name: $fullname"
echo "Home directory: $homedir"