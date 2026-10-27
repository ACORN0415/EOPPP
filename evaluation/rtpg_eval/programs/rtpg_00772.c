int test_func(void) {
    int v0 = 68;
    int v1 = 48;
    int v2 = 84;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
