int test_func(void) {
    int v0 = 7;
    int v1 = 97;
    int v2 = 62;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
