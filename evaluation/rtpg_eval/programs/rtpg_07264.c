int test_func(void) {
    int v0 = 50;
    int v1 = 21;
    int v2 = 94;
    int v3 = 72;
    int v4 = 60;
    int v5 = 97;
    int v6 = 94;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
