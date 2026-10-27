int test_func(void) {
    int v0 = 18;
    int v1 = 16;
    int v2 = 40;
    int i;
    v1 = v1 - v0;
    v0 = v0 + v1;
    return v0;
}
int main(void) { return test_func(); }
