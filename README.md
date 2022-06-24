# 素因数分解アルゴリズム

素因数分解をCで行うプログラム。

## 実行とエラー

```
> gcc main.c -fsanitize=address -fsanitize=leak 
> ./a.out <引数>
```

### 実行例

```
> gcc main.c -fsanitize=address -fsanitize=leak && ./a.out 16
16 = 2 * 2 * 2 * 2

> gcc main.c -fsanitize=address -fsanitize=leak && ./a.out 200
200 = 2 * 2 * 2 * 5 * 5
```

### エラーケース

only one number as argument.
> 引数は１つのみを受け取ります。

number must be bigger than 0 and smaller than INT_MAX.
> 引数には０以上、INT_MAX以下の値を使用してください。