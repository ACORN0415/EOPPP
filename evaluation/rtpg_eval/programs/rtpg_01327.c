int test_func(void) {
    int v0 = 5;
    int v1 = 72;
    int v2 = 84;
    int v3 = 85;
    int v4 = 11;
    int i;
    v1 = v1 - v3;
    v2 = v2 + v3;
    v0 = 34;
    return v0;
}
int main(void) { return test_func(); }
