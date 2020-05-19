# Spline-Objects-Tool
A tool for Unreal Engine 4 which allows to spawn instanced Meshes / actors / decals along a spline in the editor.
The spline's points can snap to the environment and the objects can be aligned to the surface.

![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/pres.PNG)
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/pres2.PNG)

# How to install<h3>
Add a Plugins folder into your project and past the folder Plugins/SplineObjects
 
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
* **Is Descending** - To spawn Decals in Descending Order.
* **Is In Random Order** - To spawn Decals in Random Order.
* **Decals** - To add new Decal in the array.
* **Decal Material** - One Unique Material. (Only works when Has One Unique Material is checked)
 
### Instanced StaticMeshes Spawn Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/InstancedStaticMeshes_Settings.PNG)
* **Has One Unique Material** - To use Static Mesh Material for all Static Meshes.
* **Is Descending** - To spawn Static meshes in Descending Order.
* **Is In Random Order** - To spawn Static meshes in Random Order.
* **Static Meshes** - To add new static mesh in the array.
* **Static Mesh Material** - One Unique Material. (Only works when Has One Unique Material is checked)
 
### Actors Spawn Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Actors_Settings.PNG)
* **Is Descending** - To spawn Actors in Descending Order.
* **Is In Random Order** - To spawn Actors in Random Order.
* **Blueprint Actors** - To add new Actor in the array.

# Transform Settings<h3>
 
### Location Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Location_Settings.PNG)
* **Constant** - To spawn objects with the same offset.
* **Random in range** - To spawn objects with a random offset between two values.
* **Using Curve** - To spawn objects with an offset corresponding to a curve.
 
### Rotation Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Rotation_Settings.PNG)
* **Constant** - To spawn objects with the same rotation.
* **Lerp in Range** - To spawn objects with a rotation lerping from min to max value.
* **Random in range** - To spawn objects with a random rotation between two values.
* **Using Curve** - To spawn objects with a rotation corresponding to a curve.

### Scale Settings
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Scale_Settings.PNG)
* **Constant** - To spawn objects with the same scale.
* **Lerp in Range** - To spawn objects with a scale lerping from min to max value.
* **Random in range** - To spawn objects with a random scale between two values.
* **Using Curve** - To spawn objects with a scale corresponding to a curve.

# Debug Settings<h3>
![](https://github.com/Louis1351/Spline-Objects-Tool/blob/master/Images/Debug_Settings.PNG)
* **Disable Visual** - To disable Visual if the spline is too long (to not spawn objects each frame).
* **Show arrows** - To display arrow components in the editor view.
* **Color Direction** - To change color for the directionnal arrow.
* **Color Normal** - To change color for the normal surface arrow.
* **Size** - To change arrow size.
 
# To Do<h3>
* Add Spline Meshes.
* Add multiple materials for each InstancedStaticMeshes.
