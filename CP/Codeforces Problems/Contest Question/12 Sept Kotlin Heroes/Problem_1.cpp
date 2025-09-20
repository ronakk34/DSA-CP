// // A. Furniture Store-->>


import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    val t = sc.nextInt()
    repeat(t) {
        val n = sc.nextInt()
        val a = IntArray(n) { sc.nextInt() }

        val neverBought = mutableListOf<Int>()
        var minPrice = Int.MAX_VALUE

        for (i in 0 until n) {
            if (a[i] > minPrice) {
                
                neverBought.add(i + 1) 
            } else {
                minPrice = a[i] 
            }
        }

        println(neverBought.size)
        if (neverBought.isNotEmpty()) {
            println(neverBought.joinToString(" "))
        } else {
            println()
        }
    }
}
