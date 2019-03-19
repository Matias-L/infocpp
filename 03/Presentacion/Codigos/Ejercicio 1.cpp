<?xml version="1.0" encoding="iso-8859-1"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>Ejercicio 1.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<meta name="generator" content="SynEdit HTML exporter" />
<style type="text/css">
<!--
body { color: #000000; background-color: #FFFFFF; }
.cpp1-assembler { color: #0000FF; }
.cpp1-character { color: #000000; }
.cpp1-comment { color: #3399FF; font-style: italic; }
.cpp1-float { color: #800080; }
.cpp1-hexadecimal { color: #800080; }
.cpp1-identifier { color: #000000; }
.cpp1-illegalchar { color: #000000; }
.cpp1-number { color: #800080; }
.cpp1-octal { color: #800080; }
.cpp1-preprocessor { color: #008000; }
.cpp1-reservedword { color: #000000; font-weight: bold; }
.cpp1-space { background-color: #FFFFFF; color: #000000; }
.cpp1-string { color: #FF0000; }
.cpp1-symbol { color: #000000; }
-->
</style>
</head>
<body>
<pre>
<code><span style="font: 10pt Courier New;"><span class="cpp1-preprocessor">#include &lt;iostream&gt;
#include &lt;typeinfo&gt;
#include &lt;iomanip&gt;

</span><span class="cpp1-reservedword">using</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">namespace</span><span class="cpp1-space"> std;

</span><span class="cpp1-reservedword">int</span><span class="cpp1-space"> main(){
    </span><span class="cpp1-comment">//Basado en &quot;programa 2.6&quot; (p64 del libro)
</span><span class="cpp1-space">    cout&lt;&lt;</span><span class="cpp1-string">&quot;15.0 mas 2.0 es igual a: &quot;</span><span class="cpp1-symbol">&lt;&lt;(</span><span class="cpp1-float">15.0</span><span class="cpp1-symbol">+</span><span class="cpp1-float">2.0</span><span class="cpp1-symbol">)&lt;&lt;endl
        &lt;&lt;</span><span class="cpp1-string">&quot;15.0 menos 2.0 es igual a: &quot;</span><span class="cpp1-symbol">&lt;&lt;(</span><span class="cpp1-float">15.0</span><span class="cpp1-symbol">-</span><span class="cpp1-float">2.0</span><span class="cpp1-symbol">)&lt;&lt;endl
        &lt;&lt;</span><span class="cpp1-string">&quot;15.0 por 2.0 es igual a: &quot;</span><span class="cpp1-symbol">&lt;&lt;(</span><span class="cpp1-float">15.0</span><span class="cpp1-symbol">*</span><span class="cpp1-float">2.0</span><span class="cpp1-symbol">)&lt;&lt;endl
        &lt;&lt;</span><span class="cpp1-string">&quot;15.0 dividido 2.0 es igual a: &quot;</span><span class="cpp1-symbol">&lt;&lt;(</span><span class="cpp1-float">15.0</span><span class="cpp1-symbol">/</span><span class="cpp1-float">2.0</span><span class="cpp1-symbol">)&lt;&lt;endl&lt;&lt;endl;
        
    
    
    system(</span><span class="cpp1-string">&quot;pause&quot;</span><span class="cpp1-symbol">);
    cout&lt;&lt;endl&lt;&lt;endl;
    </span><span class="cpp1-comment">/*
    En operaciones mixtas el tipo de datos de cada operaci&oacute;n se determina por las 
    siguientes reglas:
               1. Si ambos operandos son enteros, el resultado de 
               la operaci&oacute;n es un entero.
               2. Si un operando es un valor real, el resultado de 
               la operaci&oacute;n es un valor de
               precisi&oacute;n doble.
    */
</span><span class="cpp1-space">    
    </span><span class="cpp1-comment">/*
    Ahora bien. En los ejemplos anteriores algunos resultados no los mostraba con el
    punto decimal a pesar de ser un resultado de precision doble. 
    Este peque&ntilde;o codigo es solo para mostrar que internamente
    la computadora interpreta al resultado como un valor doble o entero suguiendo 
    las reglas antes mencionadas
    */
</span><span class="cpp1-space">    
    cout &lt;&lt;</span><span class="cpp1-string">&quot;Resultado: &quot;</span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-float">15.0</span><span class="cpp1-symbol">+</span><span class="cpp1-float">2.0</span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-reservedword">typeid</span><span class="cpp1-symbol">(</span><span class="cpp1-float">15.0</span><span class="cpp1-symbol">+</span><span class="cpp1-float">2.0</span><span class="cpp1-symbol">).name()&lt;&lt;endl;
    cout &lt;&lt;</span><span class="cpp1-string">&quot;Resultado: &quot;</span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-number">15</span><span class="cpp1-symbol">+</span><span class="cpp1-number">2</span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-reservedword">typeid</span><span class="cpp1-symbol">(</span><span class="cpp1-number">15</span><span class="cpp1-symbol">+</span><span class="cpp1-number">2</span><span class="cpp1-symbol">).name()&lt;&lt;endl&lt;&lt;endl;
    
    system(</span><span class="cpp1-string">&quot;pause&quot;</span><span class="cpp1-symbol">);
    cout&lt;&lt;endl&lt;&lt;endl;
    </span><span class="cpp1-comment">/*
    Podemos ver algo similar inicializando variables, y usando &quot;fixed&quot; para mostrar
    los decimales. (Basado en p65)
    */
</span><span class="cpp1-space">    
    </span><span class="cpp1-reservedword">int</span><span class="cpp1-space"> a=</span><span class="cpp1-number">2</span><span class="cpp1-symbol">;
    </span><span class="cpp1-reservedword">double</span><span class="cpp1-space"> b=</span><span class="cpp1-number">15</span><span class="cpp1-symbol">;
    </span><span class="cpp1-reservedword">int</span><span class="cpp1-space"> c=</span><span class="cpp1-number">15</span><span class="cpp1-symbol">;
     
    cout&lt;&lt;setprecision(</span><span class="cpp1-number">4</span><span class="cpp1-symbol">)&lt;&lt;fixed&lt;&lt;</span><span class="cpp1-string">&quot;15/2= &quot;</span><span class="cpp1-symbol">&lt;&lt;b/a&lt;&lt;endl;             
    cout&lt;&lt;setprecision(</span><span class="cpp1-number">4</span><span class="cpp1-symbol">)&lt;&lt;fixed&lt;&lt;</span><span class="cpp1-string">&quot;15/2= &quot;</span><span class="cpp1-symbol">&lt;&lt;c/a&lt;&lt;endl&lt;&lt;endl; </span><span class="cpp1-comment">//Notar que en este caso trunca.
</span><span class="cpp1-space">    
    system(</span><span class="cpp1-string">&quot;pause&quot;</span><span class="cpp1-symbol">);
    </span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-number">0</span><span class="cpp1-symbol">;
    }

</span></span>
</code></pre>
</body>
</html>