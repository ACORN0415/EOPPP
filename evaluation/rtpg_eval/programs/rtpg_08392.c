int test_func(void) {
    int v0 = 45;
    int v1 = 56;
    int v2 = 1;
    int i;
    v1 = 48;
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
