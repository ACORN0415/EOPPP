int test_func(void) {
    int v0 = 68;
    int v1 = 50;
    int v2 = 55;
    int i;
    v2 = v2 - v1;
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }
