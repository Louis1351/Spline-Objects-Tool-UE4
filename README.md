# Spline-Objects-Tool
A tool for Unreal Engine 4 which allows to spawn instanced Meshes / actors / decals along a spline in the editor.
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/pres.PNG)
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/pres2.PNG)

# How to install<h3>
### More Details
 
# Spline Settings<h3>
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Spline_Settings.PNG)
* **Type** - To select the current object.
* **Close** - To close the spline.
* **Follow Direction** - Each object changes their rotation corresponding to the spline's direction.  
* **Inverse Direction** - To invert the spline's direction. (Only works when Follow Direction is checked)
* **Is Snapping** - Points Of the spline snap to the nearest StaticMesh.
* **Is Align to surface** - Each object Align to surface. (Only works when Is Snapping is checked)
* **Snapping Radius** - Radius to dectect the nearest StaticMesh. (Only works when Is Snapping is checked)
* **Space** - Space between each object.  
 
# Objects Settings<h3>
 
### Decals Spawn Settings (Only works when Is Snapping is checked)
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Decals_Settings.PNG)
* **Has One Unique Material** - To use Decal Material for all Decals.
* **Is Descending** - To Spawn Decals in Descending Order.
* **Is In Random Order** - To Spawn Decals in Random Order.
* **Decals** - To add new Decal in the array.
* **Decal Material** - One Unique Material. (Only works when Has One Unique Material is checked)
 
### Instanced StaticMeshes Spawn Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/InstancedStaticMeshes_Settings.PNG)
* **Has One Unique Material** - To use Static Mesh Material for all Static Meshes.
* **Is Descending** - To Spawn Static meshes in Descending Order.
* **Is In Random Order** - To Spawn Static meshes in Random Order.
* **Static Meshes** - To add new static mesh in the array.
* **Static Mesh Material** - One Unique Material. (Only works when Has One Unique Material is checked)
 
### Actors Spawn Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Actors_Settings.PNG)
* **Is Descending** - To Spawn Actors in Descending Order.
* **Is In Random Order** - To Spawn Actors in Random Order.
* **Blueprint Actors** - To add new Actor in the array.

# Transform Settings<h3>
 
### Location Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Location_Settings.PNG)
* **Constant** -
* **Random in range** -
* **Using Curve** -
 
### Rotation Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Rotation_Settings.PNG)
* **Constant** -
* **Lerp in Range** -
* **Random in range** -
* **Using Curve** -

### Scale Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Scale_Settings.PNG)
* **Constant** -
* **Lerp in Range** -
* **Random in range** -
* **Using Curve** -

# Debug Settings<h3>
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Debug_Settings.PNG)
* **Disable Visual** -
* **Show arrows** -
* **Color Direction** -
* **Color Normal** -
* **Size** -
 
# To Do<h3>
* Add Spline Meshes.
* Add multiple materials for each InstancedStaticMeshes.
