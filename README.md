# So_long

<p align="center">
  <img src="https://user-images.githubusercontent.com/94384240/170144677-24ff4d41-6e4a-491a-adfa-7dcf0eac630a.jpeg" alt="42 School Logo" width="300">
</p>

## 🎮 42 Cursus - So_long

This project is a very small 2D game.

Its purpose is to make you work with textures, sprites, and some other very basic gameplay elements.

📜 To see the project subject, [click here](https://github.com/jlebre/42So_Long/blob/main/so_long.pdf)!

---

## 📂 Important Files

🔹 To see the `.h` file, [click here](https://github.com/jlebre/42So_Long/blob/main/so_long.h)!

🔹 To see the `Makefile`, [click here](https://github.com/jlebre/42So_Long/blob/main/Makefile)!

🔹 [Main Function](https://github.com/jlebre/42So_Long/blob/main/srcs/so_long.c)

🔹 [Map Reader](https://github.com/jlebre/42So_Long/blob/main/srcs/read_map.c)

🔹 [Map Printer](https://github.com/jlebre/42So_Long/blob/main/srcs/print_map.c)

🔹 [Renderer](https://github.com/jlebre/42So_Long/blob/main/srcs/render.c)

🔹 [Image Initializer](https://github.com/jlebre/42So_Long/blob/main/srcs/init_images.c)

🔹 [Image to Window](https://github.com/jlebre/42So_Long/blob/main/srcs/image_to_window.c)

🔹 [Key Handler](https://github.com/jlebre/42So_Long/blob/main/srcs/key.c)

🔹 [Movement Handler](https://github.com/jlebre/42So_Long/blob/main/srcs/moves.c)

🔹 [Animations](https://github.com/jlebre/42So_Long/blob/main/srcs/animations.c)

🔹 [Map Validator](https://github.com/jlebre/42So_Long/blob/main/srcs/check.c)

🔹 [Path Checker](https://github.com/jlebre/42So_Long/blob/main/srcs/check_path.c)


---

## 🕹 How to Use

### 1️⃣ Install [MLX](https://github.com/42Paris/minilibx-linux):  
```bash
sudo apt-get install gcc make xorg libxext-dev libbsd-dev
git clone https://github.com/42Paris/minilibx-linux.git && cd minilibx-linux && ( [ -f ./configure ] && ./configure || true ) && make && sudo cp libmlx.a /usr/local/lib/ && [ -f libmlx_$(uname -m).a ] && sudo cp libmlx_$(uname -m).a /usr/local/lib/ || true && sudo cp mlx.h /usr/local/include/ && sudo mkdir -p /usr/local/man/man3 && sudo cp man/man3/mlx*.1 /usr/local/man/man3
```


### 2️⃣ Clone the Repository
```bash
git clone https://github.com/jlebre/42So_Long.git
cd 42So_Long
```

### 3️⃣ Compile the Game
```bash
make
```

### 4️⃣ Run the Game
```bash
./so_long maps/sample_map.ber
```
Replace `sample_map.ber` with your own map file.

Try it:
```bash
./so_long maps/maps_that_work/medium.ber
```

### Controls
- `W` - Move up
- `A` - Move left
- `S` - Move down
- `D` - Move right
- `ESC` - Quit the game

---

## 🗺 Small Map Example

<p align="center">
  <img src="https://user-images.githubusercontent.com/94384240/190526025-6529124d-5132-46cd-b82e-ab79f066a003.png" alt="So_Long Small Map" width="500">
</p>

---

## 🛠 Map Tester

I made a [So_Long Wrong Map Tester](https://github.com/jlebre/So_Long_Wrong_Map_Tester) to validate map correctness!

---

![printf](https://user-images.githubusercontent.com/94384240/190524931-d393e5f0-4b75-49e7-b390-4de0b6434033.png)
