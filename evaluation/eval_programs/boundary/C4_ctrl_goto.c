// BOUNDARY: goto
void test_func(void) {
    int x = 0, i;
    for (i = 0; i < 26; i++) {
        x = x + 1;
        if (x > 19) goto done;
    }
done:
    x = 0;
}
int main() { test_func(); return 0; }

