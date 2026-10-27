int test_func(void) {
    int v0 = 65;
    int v1 = 16;
    int v2 = 51;
    int v3 = 76;
    int v4 = 50;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v1;
    }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
