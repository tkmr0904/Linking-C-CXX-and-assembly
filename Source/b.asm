GLOBAL ad2, hlt, WRITE2    ; addをグローバルスコープで見えるようにする．


SECTION .data


SECTION .text  ; TEXTセクション
ad2:          ; addラベルの定義(C言語からaddとして参照できる)
    mov rax, rdi ; 第一引数をraxにコピー
    add rax, rsi ; 第二引数をraxに加算
    ret

hlt:
    hlt
    ret

WRITE2:
    push rbp
    mov rbp, rsp

    mov rax, 0x01 ;write
    mov rsi, rdi    ;

    mov rdi, 0x01 ;出力先は標準出力
    mov edx, 0x12 ;文字の個数
    syscall

    mov rsp, rbp
    pop rbp
    mov rax, 0x00


    
    ret

