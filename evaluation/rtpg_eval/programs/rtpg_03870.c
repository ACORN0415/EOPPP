int test_func(void) {
    int v0 = 21;
    int v1 = 50;
    int v2 = 37;
    int i;
    v2 = v2 + v1;
    v0 = v0 | v1;
    return v0;
}
int main(void) { return test_func(); }
