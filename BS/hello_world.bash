file=school

if [ -e "$file" ]
    then
    echo "$file file is exists"
    if [ -s "$file" ]
    then
    echo "$file file is not empty"
    else
        echo "$file file is empty"
    fi
    if [ -f "$file" ]
    then
        echo "$file is a regular file"
    fi
else
    echo "$file file does not exist"
fi

