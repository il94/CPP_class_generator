<p align="center">
	<img src="https://i.goopics.net/rg9itd.png">
</p>

# <p align=center>Description</p>

<p align=center>
	Because it's borring to write your 844th class, here is a simple c++ class generator, in my favourite format.
</p>

## <p align=center>Installation</p>

```
git clone https://github.com/il94/CPP_class_generator && make -j -C CPP_class_generator
```

## <p align=center>Generate a class</p>

```
./class_generator [classes names] [--options] (in any order)
```

<p align=center>
	You can generate one or more classes, you just need to specify their names.
	Classes will be generate in canonical form by default. You can use options to add content
</p>

## <p align=center>Options</p>

<table align=center>
	<tr><td align=center>--compare</td><td align=center>get comparison operators</td></tr>
	<tr><td align=center>--arithmetic</td><td align=center>get arithmetic operators</td></tr>
	<tr><td align=center>--assign</td><td align=center>get assign operators</td></tr>
	<tr><td align=center>--stream</td><td align=center>get stream operators</td></tr>
	<tr><td align=center>--no-titles</td><td align=center>get class files without titles</td></tr>
	<tr><td align=center>--help</td><td align=center>show help message</td></tr>

</table>

## <p align=center>Screnshots</p>

<table align=center>
	<tr>
		<td align=center>Syntaxes possible</td>
		<td align=center><p align="center"><img src=https://i.goopics.net/6tl2o1.png></p></td>
	</tr>
</table>

<table align=center>
	<tr>
		<td align=center>Simple class</td><td align=center>Class with full option</td>
	</tr>
	<tr>
		<td align=center><p align="center"><img src=https://i.goopics.net/fgawb5.png></p></td>
		<td align=center><p align="center"><img src=https://i.goopics.net/9u3ukp.png></p></td>
	</tr>
</table>

<p align=center>
	You can modify the generation format of the class as you wish, the models are in "src/modelSource.cpp" and "src/modelHeader.cpp"
</p>
