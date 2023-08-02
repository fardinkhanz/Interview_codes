int compress(char* chars, int charsSize) {
    int write_idx = 0;
    int read_idx = 0;
    int char_count = 0;

    while (read_idx < charsSize) {

        char_count++;


        if (read_idx + 1 == charsSize || chars[read_idx] != chars[read_idx + 1]) {
            chars[write_idx] = chars[read_idx];
            write_idx++;


            if (char_count > 1) {
                int count = char_count;
                int digits = 0;
                while (count) {
                    digits++;
                    count /= 10;
                }
                count = char_count;
                while (digits--) {
                    chars[write_idx] = '0' + count / (int)pow(10, digits);
                    count %= (int)pow(10, digits);
                    write_idx++;
                }
            }


            char_count = 0;
        }


        read_idx++;
    }

    return write_idx;
}
