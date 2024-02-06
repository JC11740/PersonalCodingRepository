def decode(message_file):
    with open(message_file, "r") as file:
        lines = file.readlines()
  
    words = []
    for x in range(100):
        words.append('')

    for line in lines:
        number = int(line.split()[0])

        # Determine if the number equates to the last element value of a "pyramid" line
        for x in range(100):
            if number == (int((x * x + x)/2)):
                words[x] = line.split()[1]
                break

    #Concatenate the non-null list values from the pyramid together to form a sentence.
    text = ""

    for x in words:
        if x != '':
            text = text + x + " "
    return text

file_path = "coding_qual_input.txt"
decoded_message = decode(file_path)
print(decoded_message)
