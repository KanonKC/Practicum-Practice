myinfo=$USER
content1="Account name: ${myinfo}"
content2="Default shell: $SHELL"

echo Your account information has been saved to ${myinfo}-info.txt
echo $content1 >> ${myinfo}-info.txt # >> Append to new-line of file
echo $content2 >> ${myinfo}-info.txt