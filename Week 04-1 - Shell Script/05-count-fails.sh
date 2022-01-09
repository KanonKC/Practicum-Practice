access=$(cat access.log | grep -w $1 | wc -l)
success=$(cat success.log | grep -w $1 | wc -l)
fail=$((access-success))
echo $fail