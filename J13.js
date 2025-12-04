import javax.swing.*;
import java.awt.event.*;
public class EventDrivenDemo {
     public static void main(String[] args) {
JFrame frame = new JFrame("Event-Driven Programming Demo");
frame.setSize(300, 200);
frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
frame.setLayout(null);
           JButton button = new JButton("Click Me");
button.setBounds(100, 70, 100, 30);
button.addActionListener(new ActionListener() {
@Override
public void actionPerformed(ActionEvent e) {
JOptionPane.showMessageDialog(frame, "Button Clicked!");
}
});
frame.add(button);
frame.setVisible(true);
}
}
